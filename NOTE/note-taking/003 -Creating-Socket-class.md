# Objective
- Socket Class

# Tip
## We need to use typedef sfor SocketHandle
- Linux uses integers for socket handles
- Winsock uses socket data type for socket handles
- So that we can just reference both by 1 type. (Ex:<code>typedef SOCKET SocketHandle;</code>)
## We will implement IPv4 first and then IPv6 later in this course

## Socket implementation from shared library
- Socket constructor
- Need public getter for IPVersion & SocketHandle values
- Store IP value inside SocketHandle
- Use PResult for Createing & Closing Socket
- TCP (Stream-based protocol)

## Create socket for Server & Client
### Example Code
```cpp
	Socket socket;
	if (socket.Create() == PResult::P_Success)
	{
		std::cout << "Socket successfully created." << std::endl;
		socket.Close();
	}
	else
	{
		std::cerr << "Socket failed to create." << std::endl;
	}

```
# Official Documentation
- [socket function](https://learn.microsoft.com/en-us/windows/win32/api/winsock2/nf-winsock2-socket)
- [closesocket function](https://learn.microsoft.com/en-us/windows/win32/api/winsock/nf-winsock-closesocket)