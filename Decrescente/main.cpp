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


int main() 
{
	int vetor[Decrescente::arrayValue];
	char opt = 's';
	
	cout << "*** Insira 5 inteiros ***" << endl;
	cout << "" << endl;
	
	for(int i = 0; i< Decrescente::arrayValue; i++)
	{
		cout << "Insira " << i + 1 << " valor: ";
		cin >> vetor[i];
	}
	
	Decrescente myObject(vetor);
	myObject.organizaArray();
	
	do
	{
		cout << "" << endl;
		myObject.searchArray();	
		cout << "" << endl;
		cout << "Deseja continuar a busca no vetor: s ou n ";
		cin  >> opt;
		
	}while(opt != 'n');	
	
	
	return 0;
}


