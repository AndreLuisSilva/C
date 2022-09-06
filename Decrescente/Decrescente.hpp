#include <iostream>
using std::string;

class Decrescente
{
	public:
		
		const static int arrayValue = 5;   //quantidade de valores que serao coletados no array
		
		Decrescente(const int num[]);      //metodo construtor da classe		
		void organizaArray();              //metodo para organizar o array em valores decrescentes
		void searchArray();                //metoto para buscar algum valor especifico dentro do array
		
	private:
		
		int number[arrayValue];           // array setado com o parametro static 
		int element;
};
