#include <iostream>
using namespace std;
double root(double n)
{
	if (n < 0) {
		throw exception();
	};
	return sqrt(n);
} //function root with exception handling
int main()
{
	try {
		double number;
		cout << "enter a number: ";
		cin >> number;
		root(number);
	}
	catch (...) {
		cerr << "Negative vales not permitted" << endl;
	}
}