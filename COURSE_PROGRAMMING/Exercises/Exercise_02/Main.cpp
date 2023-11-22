#include <iostream>

// Rogers Rodrigues Mustafá.
// 25/10/2023.
/*
   Programa imprimi uma frase em várias linhas.
*/

auto main(int argc, char** argv) -> int
{
	std::cout
		<< "\tVou" << '\n'
		<< "\taprender" << '\n'
		<< "\ta" << '\n'
		<< "\tprogramar" << '\n'
		<< "\tna" << '\n'
		<< "\tlinguagem" << '\n'
		<< "\tC++" << '\n';

	// Primeiro cor de fundo.
	// Segundo cor da letra.
	//system("COLOR 4D");
	system("COLOR 2F");
	system("PAUSE > null");
	return 0;
}