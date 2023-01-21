# Objective
- Accept connection on the server
- Connect on the Client

# Learn
## Accept on Server
- Implement Accept function on Shared Library
- Use Accept function from Server

## Connect from Client
- Implement Connect function on Shared Library
- Use Connection function from Client

# Tip
- For blocking sockets..
- - When we call Accept function, SocketHandle function will not exit until someone tries to connect.
- - Need to handle Close function from the server for testing purposes

# Official Documentation
- [Accept function](https://learn.microsoft.com/en-us/windows/win32/api/winsock2/nf-winsock2-accept)
- [Connect function](https://learn.microsoft.com/en-us/windows/win32/api/winsock2/nf-winsock2-connect)
