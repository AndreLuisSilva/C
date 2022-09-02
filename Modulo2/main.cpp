#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() 
{
	int grau;
	
	cout << "Insira uma nota de 0 a 100: ";
	cin  >> grau;
	
	if(grau >= 90 and grau <= 100)
	{
		cout << "grau A";
	}
	else if(grau >= 80 and grau <= 89)
	{
		cout << "grau B";
	}
	else if(grau >= 70 and grau <= 79)
	{
		cout << "grau C";
	}
	else if(grau < 70 and grau >= 0)
	{
		cout << "REPROVADO";
	}
	else if(grau < 0 or grau > 100)
	{
		cout << "Valor invalido";
	}
	return 0;
}
