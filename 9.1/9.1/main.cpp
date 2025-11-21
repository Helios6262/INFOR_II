using namespace std;
#include <iostream>

//first namespace
namespace first
{
	void disp()
	{
		cout << "Inside First Namespace" << endl;
	}
}
//second namespace
namespace second
{
	void disp()
	{
		cout << "Inside Second Namespace" << endl;
	}
}
int main()
{
	while (true)
	{
		int n = 0;
		cout << "      Enter a number: " << '\n' << "********************************" << '\n' << "1.First namespace  2.Second namespace  3.Exit";
		cin >> n;
		if (n == 1) {
			first::disp();
		}
		//calling first namespace function
		if (n == 2) {
			second::disp();
		}
		//calling second namespace function
		if (n == 3)
		return 0;
	}
}