#pragma once
#define WIN32_LEAN_AND_MEAN // this cuts out alot of extra feature from Windows header
#include <WinSock2.h>

namespace PNet
{
	class Network
	{
	public: 
		static bool Initialize();
		static void Shutdown();
	};
}