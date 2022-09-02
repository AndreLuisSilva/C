#include <iostream>
#include <string>
#include "SalesStore.hpp"

using std::cout;
using std::endl;
using std::string;

int main() 
{
	SalesStore myStore("Loja teste\n");	
	
	myStore.bootStream();
	myStore.CalculateAvg();
	myStore.enterProducts();
	myStore.productsReport();	
	//cout <<   "Loja 1 = " << myStore1.getStoreTitle() << endl;		
	
	return 0;
	
}
		
		
