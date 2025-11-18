#pragma once
#include <iostream>
using namespace std;
class fraction
{
	int num, den;
public:
	fraction(int n = 1, int d = 1)  //constructor
	{
		num = n;
		den = d;
		simplify(); //IGUAL
		cout << "Constructor fraccion" << endl;
	}
	~fraction()  //destructor
	{
		cout << "Destructor fraccion" << endl;
	}
	fraction add(fraction& f) {
		long dd = den * f.den;
		long nn = num * (dd / den) + f.num * (dd / f.den);

		simplify(); //aÑADIMOS LA MISMA FUNCION SIMPLIFY

		fraction fs(nn, dd);
		return fs;
	};
	void prt() {
		cout << "[" << num << "/" << den << "]";
	}
	void simplify() {
		long m, n, r;
		// Elegimos el mayor como m y el menor como n
		if (num < den) {
			m = den; n = num;
		}
		else {
			m = num; n = den;
		}

		// Algoritmo de Euclides para el mcd
		r = m % n;
		while (r != 0) {
			m = n;
			n = r;
			r = m % n;
		}
		num /= n; // num = n/num
		den /= n;
	}
};