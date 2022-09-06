#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include "Decrescente.hpp"

using std::setprecision;
using std::setw;
using std::fixed;
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::rand;
using std::srand;
using std::time;

int searchInt(const int [], int, int);

Decrescente::Decrescente(const int num[]) //metodo construtor da classe Decrescente
{
	for(int i = 0; i < arrayValue; i++)
	{
		number[i] = num[i]; 
	}
}

void Decrescente::organizaArray()
{
	int temp;
	
	cout << "" << endl;
	cout << "Conteudo original do array: " << endl;
	
	for(int i = 0; i < arrayValue; i++)
	{
		if(i != 0)
		{
			cout << " ,";
		}
		
		cout << setw(4) << number[i];
	}
	
	for(int i = 0; i < arrayValue; i++)
	{
		for(int j = i; j < arrayValue; j++)
		{
			if(number[i] < number[j])
			{
				temp = number[i];
				number[i] = number[j];
				number[j] = temp;
			}
		}
	}	
	
	cout << "" << endl;
	cout << "Conteudo em ordem descrescente do array: " << endl;
	
	for(int i = 0; i < arrayValue; i++)
	{
		if(i != 0)
		{
			cout << " ,";
		}
		
		cout << setw(4) << number[i];
	}
	cout << "" << endl;
}

void Decrescente::searchArray()
{
	int searchKey;	
	
	cout << "Digite um valor para pesquisar no array: ";
	cin  >> searchKey;
	element = searchInt(number, searchKey, arrayValue);
	
	if(element != -1)
	{
		cout << "" << endl;
		cout << "Encontrou o valor no elemento " << element << endl;
	}
	else
	{
		cout << "" << endl;
		cout << "Nao foi encontrado o valor dentro do vetor!" << endl;
	}
}
	


int searchInt(const int myArray[], int key, int sizeArray)
{
	for(int i = 0; i <= sizeArray; i++)
	{
		if(myArray[i] == key)
		{
			return i;
		}		
	}
	return -1;
	
}
