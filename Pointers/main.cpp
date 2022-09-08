#include <iostream>

using namespace std;

int main() 
{
	float var = 42.67;
	float *ptr_var = &var;
	
	cout << "Endereco da variavel: " << &var << endl;
	cout << "Endereco do ponteiro: " << &ptr_var << endl;
	cout << "Conteudo do ponteiro: " << *ptr_var << endl;
	cout << "Conteudo da variavel: " << var << endl;
	
	return 0;
}
