#include <iostream>
#include <iomanip>

auto main(int argc, char** argv) -> int
{
	float Numero;
	double Numero2;

	Numero = 55.56f;
	Numero2 = 45345.904555;

	std::cout << "Valor de numero: " << std::setprecision(12) << Numero << '\n';
	std::cout << "Tamanho da variavel Numero: " << sizeof(Numero) <<
		" Bytes" << '\n';
	std::cout << "Endereco da memoria: " << &Numero << '\n';
	std::cout << "============================================ " << '\n';
	std::cout << "Valor de numero2: " << Numero2 << '\n';
	std::cout << "Tamanho da variavel Numero: " << sizeof(Numero2) <<
		" Bytes" << '\n';
	std::cout << "Endereco da memoria: " << &Numero2 << '\n';


	system("PAUSE > null");
	return 0;

}