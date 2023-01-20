// Client Code

#include <PNet\IncludeMe.h>
#include <iostream>

using namespace PNet;
int main()
{
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

	if (Network::Initialize())
	{
		std::cout << "Winsock api successfully initialized." << std::endl;
	}
	Network::Shutdown();
	system("pause");
	return 0;
}