#include <string>
using std::string;

class Calculadora
{
	public:
		
		Calculadora(string title);
		void setCalculadora(string title);
		string getCalculadora();
		void calc();		
		
	private:
		
		string text;
		float valor1, valor2;	
	
	protected:
		
};
