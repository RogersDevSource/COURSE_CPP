#include <iostream>

auto main(int argc, char** argv) -> int
{
	int NumComputadores{ 100 };
	int SerialComputadores{ 11111 };

	std::cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ " <<
		'\n' << '\n';

	std::cout << "\t Valor de NumComputadores = : " << NumComputadores << "\n";
	std::cout << "\t Valor de SerialComputadores = : " << SerialComputadores <<
		"\n" << '\n';

	std::cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ " <<
		'\n';

	system("PAUSE > null");
	return 0;
}
