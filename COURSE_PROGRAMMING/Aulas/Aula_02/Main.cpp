#include <iostream>
#include <windows.h>

auto main(int argc, char** argv) -> int
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	int Numero01 = 0, Numero02 = 0;
		
	std::cout << "Digite o primeiro n�mero: ";
	std::cin >> Numero01;
	std::cout << "N�mero01 = " << Numero01 << '\n';
	std::cout << "==============================================" << '\n';
	std::cout << "Digite o segundo n�mero: ";
	std::cin >> Numero02;
	std::cout << "N�mero02 = " << Numero02 << '\n';

	system("PAUSE  > null");
	return 0;
}