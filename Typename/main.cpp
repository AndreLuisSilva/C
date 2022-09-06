#include <iostream>
#include <string>

using std::cout;
using std::endl;

template < typename WR1 > 
WR1 calculate (WR1 value1);
template < typename WR2 >
WR2 calculate (WR2 value1, WR2 value2);
template < typename WR3 >
WR3 calculate (WR3 value1, WR3 value2, WR3 value3);
template < typename WR4>
WR4 calculate (WR4 value1, WR4 value2, WR4 value3, WR4 value4);

int main() 
{
	calculate("-----------------------------");
	calculate(1,2,3,4);
	calculate("-----------------------------");
	calculate(1.2,2.2,3.2,4.2);
	calculate("-----------------------------");
	calculate(1.212,2.111,321.123);
	calculate("-----------------------------");
	calculate('A', 'a');
	calculate("-----------------------------");
	calculate("Andre Luis Alves da Silva");
	calculate("-----------------------------");
	
	return 0;
}

template < typename WR1 >
WR1 calculate (WR1 value1)
{
	cout << value1 << endl;	
}

template < typename WR2 >
WR2 calculate (WR2 value1, WR2 value2)
{
	cout << value1 << endl;
	cout << value2 << endl;
	
}

template < typename WR3 >
WR3 calculate (WR3 value1, WR3 value2, WR3 value3)
{
	cout << value1 << endl;
	cout << value2 << endl;
	cout << value3 << endl;
}

template < typename WR4 >
WR4 calculate (WR4 value1, WR4 value2, WR4 value3, WR4 value4)
{
	cout << value1 << endl;
	cout << value2 << endl;
	cout << value3 << endl;
	cout << value4 << endl;
}
