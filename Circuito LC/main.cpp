#include <iostream>
#include <iomanip>
#include <cmath>

#define linhas 5

using std::setprecision;
using std::setw;
using std::fixed;
using std::string;
using std::cout;
using std::sqrt;
using std::endl;

int main() {
	
	                                   
	float capacitor[5] = {pow(10,-9), pow(10,-8), pow(4.7,-8), pow(10,-7), pow(10,-6)};
	float   indutor[5] = {0.0002, 0.0002 , 0.0002, 0.0002 , 0.0002};
	float     hertz[5];
	
	cout << setw(15) << " C " << setw(15) << " I " << setw(15) << " H " << endl;
	
	for(int i = 0; i < linhas; i++)
	{
		float ca = capacitor[i];
		float in = indutor[i];
				
		hertz[i] = 1 / ((2 * 3.141592 )* (sqrt(ca * in)));
		
		cout << setw(15) << ca << " " << setw(15) << in << " " << setw(15) << hertz[i] << endl;			
	}	
	
	return 0;
}
