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

void randonNumber(int qntNumber, int initialValue, int lastValue, int qntColum);
inline unsigned rangeRand(int valorInicial, int valorFinal);
void sumCount(int value);

int counter;

int main() 
{
	char opt;
	int qnt, num1, num2, col;
	
	do
	{
		cout << "Informe quantos numeros serao sorteados: ";
		cin  >> qnt;
		cout << "Informe a faixa de numeros a serem sorteados: ";
		cin  >> num1 >> num2;
		cout << "Informe o numero de colunas a serem geradas: ";
		cin  >> col;
		cout << "\n";
		
		srand(time(0));  //retorna os segundos do relogio como semente para gerar os numeros randomicos
		randonNumber(qnt, num1, num2, col);
		
		cout << "\n\nSoma dos numeros sorteados: " << counter << endl;
		
		cout << "\n\nRealizar um novo sorteio: S ou N = ";
		cin  >> opt;
		cout << "\n";
		
	}while(opt != 'n');
	
	return 0;
}

void randonNumber(int qntNumber, int initialValue, int lastValue, int qntColum)
{
	for(int i = 0; i < qntNumber; i++)	{
		
		int random = rangeRand(initialValue, lastValue);
		sumCount(random);
		cout << setw(5) << random;		
		
		if(i % qntColum == 0)
		  cout << endl;
	}
}

inline unsigned rangeRand(int valorInicial, int valorFinal)
{
	return valorInicial + rand()%valorFinal;
}

void sumCount(int value)
{
	 counter = counter + value;
}
