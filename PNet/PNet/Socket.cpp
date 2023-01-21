#include "Socket.h"
#include <assert.h>

namespace PNet {


	Socket::Socket(IPVersion ipversion, SocketHandle handle)
		:ipversion(ipversion), handle(handle)
	{
		assert(ipversion == IPVersion::IPv4);
	}

	PResult Socket::Create()
	{
		assert(ipversion == IPVersion::IPv4);

		// don't create socket if socket is already created
		if (handle != INVALID_SOCKET)
		{
			return PResult::P_NotYetImplemented;
		}

		handle = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP); // ateempt to create socket

		// Check for socket failure
		if (handle == INVALID_SOCKET)
		{
			int error = WSAGetLastError(); // Specific error code
			return PResult::P_NotYetImplemented; // Our error code
		}

		if (SetSocketOption(SocketOption::TCP_NoDelay, TRUE) != PResult::P_Success)
		{
			return PResult::P_NotYetImplemented;
		}

		return PResult::P_Success;
	}

	PResult Socket::Close()
	{
		// closing socket that was never created is impossible
		if (handle == INVALID_SOCKET)
		{
			return PResult::P_NotYetImplemented;
		}

		int result = closesocket(handle);
		if (result != 0) // if error occurred while trying to close socket
		{
			int error = WSAGetLastError();
			return PResult::P_NotYetImplemented;
		}

		handle = INVALID_SOCKET; // Reset the value of socket handle to be invalid socket

		return PResult::P_Success;
	}

	SocketHandle Socket::GetHandle()
	{
		return handle;
	}

	IPVersion Socket::GetIPVersion()
	{
		return ipversion;
	}
	PResult Socket::SetSocketOption(SocketOption option, BOOL value)
	{
		int result = 0;
		switch (option)
		{
		case SocketOption::TCP_NoDelay:
			result = setsockopt(handle, IPPROTO_TCP, TCP_NODELAY, (const char*) & value, sizeof(value));
			break;
		default:
			return PResult::P_NotYetImplemented;
		}

		if (result != 0) // If an error occurred
		{
			int error = WSAGetLastError();
			return PResult::P_NotYetImplemented;
		}

		return PResult::P_Success;
	}
}