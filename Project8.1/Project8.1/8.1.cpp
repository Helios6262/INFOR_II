#include <iostream>
#include "fraction.h"

using namespace std;

void main() {
	int n, d;
	fraction f1(1, 4);
	cout << "Enter N,D:?"; cin >> n >> d;
	fraction f2(n, d);

	cout << "\n";  f1.prt();
	cout << "\n"; f2.prt();

	fraction fs = f1.add(f2);
	fs.prt();
	cout << endl;
}