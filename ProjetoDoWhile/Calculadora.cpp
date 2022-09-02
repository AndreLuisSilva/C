#include <iostream>
#include <string>
#include <math.h>
#include "Calculadora.hpp"

using std::cout;
using std::cin;
using std::string;
using std::endl;

Calculadora::Calculadora(string message)
{
	setCalculadora(message);
}

void Calculadora::setCalculadora(string title)
{
	text = title;
}

string Calculadora::getCalculadora()
{
	return text;
}

void Calculadora::calc()
{	
		char opt;		
		
		cout << "Insira o 1 valor para ser calculado: ";
		cin  >> valor1;		
		//cout << "\n";
		cout << "Insira o 2 valor para ser calculado: ";
		cin  >> valor2;		
		//cout << "\n";
		
		cout << "Insira uma das opcoes para realizar o calculo( + , - , / , * , p) = ";		
		cin  >> opt;
				
		switch(opt)
		{
			case '+':			  
			  	cout << "\nA soma dos valores inseridos e " << valor1 + valor2 << endl;
			  	break;
			case '-':
				cout << "\nA subtracao dos valores e " << valor1 - valor2 << endl;
				break;
			case '/':
				
				if(valor2 == 0)
				{
					while(valor2 == 0)
					{
						cout << "\nInsira um valor diferente de 0 para realizar a divisao!" << endl;
						cin  >> valor2;
					}
				}
				cout << "\nA divisao dos valores e " << valor1 / valor2 << endl;
				break;
			case 'p':
			case 'P':
				cout << "\nA potenciacao dos valores e " << pow(valor1, valor2) << endl;
				break;
			case '*':
				cout << "\nA multiplicao dos valores e " << valor1 * valor2 << endl;
			    break;
			default:
				cout << "\nOpcao invalida" << endl;
				break;
		}		
	
}
	 

