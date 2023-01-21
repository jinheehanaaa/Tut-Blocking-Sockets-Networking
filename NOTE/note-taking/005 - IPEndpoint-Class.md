# Objective
- IPEndpoint Class

# Learn
- Hold ipversion & hostname as a string
- Convert IP format from presentation to netwrok using <code>inet_pton function</code>
- Copy the IP address at the beginning of ip_bytes using memcpy
- Test with Test function in Server to get information


# Tip
## Presentation to Network Format for IP Address
- We need network format of ip address (not presentation format like "127.0.0.1") stored in in_addr structure
- - inet_pton (Convert presentation to network format)
## Accessing IPv4 with using Union
- For accessing IPv4 address, we need to use S_un union
## IPv4 & 4 bytes
- Cast ULONG to match the 4 bytes for IPv4 address

# Official Documentation
- [in_addr structure](https://learn.microsoft.com/en-us/windows/win32/api/winsock2/ns-winsock2-in_addr)
- [inet_pton function](https://learn.microsoft.com/en-us/windows/win32/api/ws2tcpip/nf-ws2tcpip-inet_pton)

# Resources
