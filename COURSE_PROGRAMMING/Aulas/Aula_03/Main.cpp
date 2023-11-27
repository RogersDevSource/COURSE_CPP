#include <iostream>
#include <windows.h>

auto main(int argc, char** argv) -> int
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	float Num1{ 0.0 }, Num2{ 0.0 }, Num3{ 0.0 };
	float media{ 0.0 };
	char Resp;
	
	
	do
	{
     
		std::cout << "======================================== " << '\n';
		std::cout << "Digite a primeira nota: ";
		std::cin >> Num1;

		std::cout << "======================================== " << '\n';

		std::cout << "Digite a segunda nota: ";
		std::cin >> Num2;

		std::cout << "======================================== " << '\n';

		std::cout << "Digite a terceira nota: ";
		std::cin >> Num3;

		std::cout << "As notas digitadas são: " << Num1 << ", "
			<< Num2 << ", " << Num3 << '\n';
		std::cout << "======================================== " << '\n';

		media = (Num1 + Num2 + Num3) / 3;
		std::cout << "A média é: " << media << '\n';
		std::cout << "======================================== " << '\n';

		std::cout << "\nDeseja calcular outra média aritimetica? " << '\n';
		std::cin >> Resp;

	} while (Resp == 'S' || Resp == 's');

	std::cout << "Saindo do programa. " << '\n';
	std::cout << "======================================== ";

	system("PAUSE > null");
	return 0;
}