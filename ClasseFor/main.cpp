#include <iostream>
#include <string>
#include "Math.hpp"

using std::cout;
using std::cin;
using std::string;

int main() 
{
	Math calculo("Iniciando o programa...\n\n");
	
	cout << calculo.getMath();
	calculo.calculate();
	
	return 0;
}
