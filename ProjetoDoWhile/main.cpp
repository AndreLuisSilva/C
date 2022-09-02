#include <iostream>
#include <string>
#include "Calculadora.hpp"

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{	
	char validate;	
	Calculadora c1("Simples Calculadora em C++");	
	cout << c1.getCalculadora() << "\n\n";

	do
	{		
		c1.calc();		
		cout << "\nDeseja continuar realizando operacoes, digite n para sair = ";
		cin  >> validate;
		cout << "\n";
		
	}while(validate != 'n');	
	
	return 0;
}
