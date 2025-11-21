using namespace std;
#include <iostream>

namespace foodspace {
	class product {
		char name[20];
		double cost;
	public:
		product(const char* n, double c) {
			cost = c;
			strcpy_s(name, 20, n);
		}
		void prt() 
		{
			cout << name << " is " << cost << " euros. " << endl;
		}
	};
}

namespace electspace {
	class product {
		char name[20];
		double cost;
		int years;
	public:
		product(const char* n, double c, int y) {
			cost = c;
			years = y;
			strcpy_s(name,20,n);
		}
		void prt()
		{
			cout << name << " is " << cost << " euros, it expires in: " << years<< " years. " << endl;
		}
	};
}

void main()
{
	foodspace::product f1("filete", 50);
	electspace::product e1("LG", 50,3);
	f1.prt();
	e1.prt();
	
}