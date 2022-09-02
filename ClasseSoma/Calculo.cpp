#include <iostream>
#include <string>
#include "Calculo.hpp"
using std::string;
using std::cout;
using std::cin;
using std::endl;

Calculo::Calculo(string msg)
{
	setMessage(msg);	
}

void Calculo::setMessage(string text)
{
	message = text;
}

string Calculo::getMessage()
{
	return message;
} 

void Calculo::calculate()
{
	while(count <= 6)
	{
		cout << "Insira o " << count << " valor: ";
		//cin  >> valor[count];	
		
		if(count == 1)
		{
			cin >> v1;
		}
		
		else if(count == 2)
		{
			cin >> v2;
		}
		
		else if(count == 3)
		{
			cin >> v3;
		}
		
		else if(count == 4)
		{
			cin >> v4;
		}
		
		else if(count == 5)
		{
			cin >> v5;
		}
		
		else if(count == 6)
		{
			cin >> v6;
		}
		
		count++;
	}
	
	cout << "\nSoma = " << v1 + v2 << endl;
	cout << "Subtracao = " << v3 - v4 << endl;
	cout << "Produto = " << v5 * v6;
		
}


