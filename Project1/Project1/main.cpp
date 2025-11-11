#include <iostream>
using namespace std;
#include "fraction.h"

void main()
{
	int n, d;
	fraction f1(1, 4);
	fraction f2(1, 4);

	fraction fs = f1.add(f2);
	cout << fs;
}
