#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using std::cin;
using std::cout;
using std::rand;
using std::srand;
using std::time;
using std::setw;
using std::endl;

int tabuada(int num, int i);



int main() 
{
	int iteracao = 0; 
	int numero;
	char opt = 's';
	
	do
	{
		
	cout << "Insira um numero para realizar a tabuada: ";
	cin  >> numero;
	cout << "" << endl;
	tabuada(numero, iteracao);
	cout << "" << endl;
	cout << "Deseja continuar calculando, s ou n: ";
	cin  >> opt;
	cout << "" << endl;
	
	}while(opt != 'n');
	
	return 0;
}

int tabuada(int num, int iteracao)
{		
	if(iteracao <= 10)
	{
		cout << iteracao << " x " << num << " = " << iteracao * num << endl;
		iteracao++;
		tabuada(num, iteracao);
	}	
		
}
