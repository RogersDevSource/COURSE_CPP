#include <iostream>
#include <windows.h>

auto main(int argc, char** argv) -> int
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	int Numero01 = 0, Numero02 = 0;
		
	std::cout << "Digite o primeiro número: ";
	std::cin >> Numero01;
	std::cout << "Número01 = " << Numero01 << '\n';
	std::cout << "==============================================" << '\n';
	std::cout << "Digite o segundo número: ";
	std::cin >> Numero02;
	std::cout << "Número02 = " << Numero02 << '\n';

	system("PAUSE  > null");
	return 0;
}