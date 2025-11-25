#include <iostream>
using namespace std;
double root(double n)
{
	if (n < 0) {
		throw 1;
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
		cout << "Error: " <<  endl;
	}
}