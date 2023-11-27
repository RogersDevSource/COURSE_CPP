#include <iostream>
#include <windows.h>

auto main(int argc, char** argv) -> int
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	float Num1 = { 0.0 } , Num2{ 0.0 }, Num3{ 0.0 };
	float media{ 0.0 };
		
	std::cout << "==============================" << '\n';
	std::cout << "Digite a primeira nota: ";
	std::cin >> Num1;
	
	std::cout << "==============================" << '\n';
	
	std::cout << "Digite a segunda nota: ";
	std::cin >> Num2;
	
	std::cout << "==============================" << '\n';

	std::cout << "Digite a terceira nota: ";
	std::cin >> Num3;
	
	std::cout << "==============================" << '\n';

	std::cout << "Notas digitadas: " << Num1 << ", "
	<< Num2 << ", " << Num3 << '\n';
		
	media = (Num1 + Num2 + Num3) / 3;
		
	std::cout << "O valor da média é: " << media << '\n';
	
	std::cout << "==============================" << '\n';
	
	system("PAUSE > null");
	return 0;
}