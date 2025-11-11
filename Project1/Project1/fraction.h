#pragma once
#include <iostream>
using namespace std;

class fraction
{
	int num, den;
public:
	fraction(int n, int d=1) {}; //mejor tener un constructor vacio par que de error
	~fraction() {};
	fraction add(fraction& f2)
	{
		int dd = den * f2.den;
		int nn = num * (dd/den) + f2.num * (dd/f2.den);
		fraction fs (dd, nn);
			return fs;
	}

	void prt(){
		cout << "[" << num << "/" << den << "]";
	}

};

