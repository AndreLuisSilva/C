//classe SalesSore.cpp
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include "SalesStore.hpp"

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


SalesStore::SalesStore(string title)
{
	setStoreTitle(title);
	prodA = 0;
	prodB = 0;
	prodC = 0;
}
		
void SalesStore::setStoreTitle(string title)
{
	storeTitle = title;
} //seta o valor da loja
		
string SalesStore::getStoreTitle()
{
	return storeTitle;
} //retorna o valor da loja
		
void SalesStore::bootStream()
{
	cout << getStoreTitle() << endl;
}

void SalesStore::CalculateAvg()
{
	int acc = 0;
	int counter = 0;
	int value;
	int avg;
	
	cout << "Insira o valor da venda ou dgite -1 para sair :";
	cin  >> value;
	
	while(value != -1)
	{
		acc += value; //variavel que acumula os valores de value para realizar a media
		counter++;
		
		cout << "Insira o valor da venda ou dgite -1 para sair :";
		cin  >> value;
	}
	
	if(counter != 0)
	{
		avg = static_cast < double > (acc)/counter; // faz o casting de int para double e calcula a media
		cout << "\nTotal de vendas " << counter << endl;
		cout << "\nMedia das vendas " << setprecision(2) << fixed << avg 
		     << "\n" << endl;
	}
	else 
		cout << "Nenhum valor de venda foi inserido!" << endl;
}

void SalesStore::enterProducts() 
{
	int product;
	
	cout << "Insira o produto vendido: " << endl
	     << "ou tecle ctrl+Z para sair." << endl;
	
	while( (product = cin.get()) != EOF) // faz a leitura do produto dentro do proprio while com cin.get()
	{
		
		switch(product)
		{
			case 'a':
			case 'A':
				prodA++;
				break;
				
			case 'b':
			case 'B':
				prodB++;
				break;
			
			case 'c':
			case 'C':
				prodC++;
				break;
			
			case '\n':  //ignora novas linhas
			case '\t':  //ignora tabulacoes
			case ' ':   //ignora espacos em branco
				break;
			
			default:
				cout << "Produto nao cadastrado! Insira um produto valido." << endl;			
			
		}
		
	} 
}

void SalesStore::productsReport()
{
	cout << "\n-----------------------------"
	     << "\nResumo dos produtos vendidos."
	     << "\nProduto A: " << prodA 
	     << "\nProduto B: " << prodB 
	     << "\nProduto C: " << prodC << endl;
}
		

