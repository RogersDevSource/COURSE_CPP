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
	std::cout << "O valor da var�vel �: " << num << '\n';
	std::cout << "O tamanho da var�vel �: "
		<< sizeof(num) << " Bytes" << '\n';
	std::cout << "O endere�o da vari�vel �: " << &num << '\n';
	std::cout << "============================================"
		<< '\n';
#pragma endregion Region_1

#pragma region Region_2
	std::cout << "O valor da var�vel �: " << med << '\n';
	std::cout << "O tamanho da var�vel �: " << sizeof(med)
		<< " Bytes" << '\n';
	std::cout << "O endere�o da var�vel �: " << &med << '\n';
	std::cout << "============================================"
		<< '\n';
#pragma endregion Region_2

#pragma region Region_3
	std::cout << "O valor da var�vel �: " << std::setprecision(2)
		<< std::fixed << sum << '\n';
	std::cout << "O tamanho da var�vel �: " << sizeof(sum) << " Bytes"
		<< '\n';
	std::cout << "O endere�o da var�vel �: " << &sum << '\n';
	std::cout << "============================================"
		<< '\n';
#pragma endregion Region_3

#pragma region Region_4
	std::cout << "O valor da var�vel �: " << name << '\n';
	std::cout << "O tamanho da var�vel �: " << sizeof(name)
		<< " Bytes" << '\n';
	std::cout << "O endere�o da var�vel �: " << (void*)&name << '\n';
	std::cout << "============================================"
		<< '\n';
#pragma endregion Region_4

	system("PAUSE > null");
	return 0;
}