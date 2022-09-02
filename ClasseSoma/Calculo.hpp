#include <string>
using std::string;

class Calculo
{
	public:
		
		Calculo(string message);
		void setMessage(string message);
		string getMessage();
		void calculate();
		
	private:
			
		string message;
		int count = 1;
		int valor[5];
		int v1, v2, v3, v4, v5, v6;
};
	

