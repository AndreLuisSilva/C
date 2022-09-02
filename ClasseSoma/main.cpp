#include <iostream>
#include <string>
#include "Calculo.hpp"

using std::cout;
using std::endl;
using std::string;

int main() 
{
	Calculo number("Iniciando o sistema de calculo...\n");
	
	cout << number.getMessage() << endl;
	number.calculate();
	
	return 0;
}
