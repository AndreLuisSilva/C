//arquivo header com os prototipos das funcoes

#include <string>
using std::string;

class SalesStore
{
	public:
		
		SalesStore(string title);		
		void setStoreTitle(string title);	
		string getStoreTitle();	
		void bootStream();	
		void CalculateAvg();
		void enterProducts();
		void productsReport();	
		
	private:
		
		string storeTitle;
		int    prodA;
		int    prodB;
		int    prodC;
		
};
