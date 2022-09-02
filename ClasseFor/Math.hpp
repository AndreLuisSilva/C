#include <string>

using std::string;


class Math
{
	public:
		
		Math(string title);
		void setMath(string title);
		string getMath();
		void calculate();
		
	private:
		
		string message;
		int x, y;
	
};
