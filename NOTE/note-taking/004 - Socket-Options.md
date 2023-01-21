# Objective
- Socket Options

# Tip
- setsockopt for TCP
- We will be using TCP_NODELAY option in IPPROTO_TCP level
- By default, nagle algorithm is disabled for IPPROTO_TCP level
- we are not trying to send small packets for TCP, so we will disable Nagle algorithm
- bool vs. BOOL is different (BOOL is actually integer)

# Official Documentation
- [setsockopt](https://learn.microsoft.com/en-us/windows/win32/api/winsock/nf-winsock-setsockopt)

# Minor Resources
- Some optional information 
- [Nagle algorithm](https://en.wikipedia.org/wiki/Nagle%27s_algorithm)