// Server Code
#include <PNet\IncludeMe.h>
#include <iostream>

using namespace PNet;

int main()
{
	if (Network::Initialize())
	{
		std::cout << "Winsock api successfully initialized." << std::endl;


		Socket socket;
		if (socket.Create() == PResult::P_Success)
		{
			std::cout << "Socket successfully created." << std::endl;
			if (socket.Listen(IPEndpoint("0.0.0.0", 4790)) == PResult::P_Success)
			{
				std::cout << "Socket successfully listening on port 4790." << std::endl;
			}
			else 
			{
				std::cout << "Failed to listen on port 4790." << std::endl;
			}
			socket.Close();
		}
		else
		{
			std::cerr << "Socket failed to create." << std::endl;
		}
	}
	Network::Shutdown();
	return 0;
}