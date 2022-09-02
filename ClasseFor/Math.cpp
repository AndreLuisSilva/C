#include <iostream>
#include <string>
#include <iomanip>
#include "Math.hpp"

using std::cout;
using std::endl;
using std::string;
using std::setw;

Math::Math(string title)
{
	setMath(title);
}

void Math::setMath(string title)
{
	message = title;
}

string Math::getMath()
{
	return message;
}

void Math::calculate()
{
	cout << "   X      Y" << endl;
	
	for(x = -12; x <= 47; x++)
	{
		y = 4 * x - 53;
		
		cout.width(5);
		cout << x << " "
			 << setw(5)
			 << y 			 	 
			 << endl;	
	}
}
