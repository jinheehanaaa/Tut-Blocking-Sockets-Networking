# Objective
- Retrieve the IP port information of newly accepted connection

# Learn
- Pass 2 more parameters for accept (Address & Length)
- Print function for displaying the information about IP endpoint
  
# Tip
- For little endian architecture, convert network to host byte order using ntohs 
- 
## Why Server & Client is using different port? (ex: Server is using 4790 while Client is using 59433 or random port number)
- Client knows how to send packets to server from random port number
- Server knows Client's port number
- Server will send packets to client with that random port number for Client
- You don't have to worry about this random number for TCP (But it's different for UDP)

# Official Documentation
- [accept function]