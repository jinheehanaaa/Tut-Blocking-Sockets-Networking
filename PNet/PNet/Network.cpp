#include "Network.h"
#include <iostream> // to see error

// Initialize the winsock
bool PNet::Network::Initialize()
{
    WSADATA wsadata;
    int result = WSAStartup(MAKEWORD(2, 2), &wsadata); // (lowbyte,highbyte), wsadata
    if (result != 0)
    {
    std::cerr << "Failed to start up the winsock API." << std::endl;
        return false;
    }

    if (LOBYTE(wsadata.wVersion) != 2 || HIBYTE(wsadata.wVersion) != 2) {
        std::cerr << "Could not find a usable version of the winsock api dll." << std::endl;
        return false;
    }

    return true;
}

// Shutdown the winsock
void PNet::Network::Shutdown()
{
    WSACleanup();
}
