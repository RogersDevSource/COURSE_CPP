#include <iostream>
#include <windows.h>
#include <iomanip>

auto main(int argc, char** argv) -> int
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	int num{ 40 };
	float med{ 6.1 };
	double sum{ 3.14159 };
	char name{ 'A' };

#pragma region Region_1
	std::cout << "============================================" <<
		'\n';
	std::cout << "O valor da varável é: " << num << '\n';
	std::cout << "O tamanho da varável é: "
		<< sizeof(num) << " Bytes" << '\n';
	std::cout << "O endereço da variável é: " << &num << '\n';
	std::cout << "============================================"
		<< '\n';
#pragma endregion Region_1

#pragma region Region_2
	std::cout << "O valor da varável é: " << med << '\n';
	std::cout << "O tamanho da varável é: " << sizeof(med)
		<< " Bytes" << '\n';
	std::cout << "O endereço da varável é: " << &med << '\n';
	std::cout << "============================================"
		<< '\n';
#pragma endregion Region_2

#pragma region Region_3
	std::cout << "O valor da varável é: " << std::setprecision(2)
		<< std::fixed << sum << '\n';
	std::cout << "O tamanho da varável é: " << sizeof(sum) << " Bytes"
		<< '\n';
	std::cout << "O endereço da varável é: " << &sum << '\n';
	std::cout << "============================================"
		<< '\n';
#pragma endregion Region_3

#pragma region Region_4
	std::cout << "O valor da varável é: " << name << '\n';
	std::cout << "O tamanho da varável é: " << sizeof(name)
		<< " Bytes" << '\n';
	std::cout << "O endereço da varável é: " << (void*)&name << '\n';
	std::cout << "============================================"
		<< '\n';
#pragma endregion Region_4

	system("PAUSE > null");
	return 0;
}