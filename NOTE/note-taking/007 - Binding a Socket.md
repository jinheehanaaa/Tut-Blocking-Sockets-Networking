# Objective
- Binding a Socket

# Learn
## Why bind a socket?
- We need to bind a socket in order to aceept the client trying to request in port

## Step
- 1. Convert Host to Network Byte (2 bytes short integer)
- 2. Bind implementation
- 3. Test with 0.0.0.0 wildcard for any machines

# Tip
- Convert Host to Network Byte Order short 2 bytes using htons (4 bytes for htonl, 8 bytes for custom function)

# Official Documentation
- [Bind function](https://learn.microsoft.com/en-us/windows/win32/api/winsock/nf-winsock-bind)