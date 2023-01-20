# Objective
- Winsock API for Windows

# Tip
- Use static for Initialize(), Shutdown() 
- - it will be called only once per application
- - We don't have to track anything with regarding its instance
- Need to link winsock library for Server & Client (To avoid linker error)
- Set Server as startup

# WSAStartup
- Requires lowbyte, highbyte, &wsaData
- wsaData checks version of lowbyte & highbyte

# Official Doc
- Search in Microsoft documentation
- [WSAStartup](https://learn.microsoft.com/en-us/windows/win32/api/winsock/nf-winsock-wsastartup)