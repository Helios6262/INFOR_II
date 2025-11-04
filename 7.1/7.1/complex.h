#pragma once
using namespace std;
#include <iostream>;

class complex
{
	double real;
	double imag;
public:
	void SetData(void)
	{
		cout << "real p:";
		cin >> real;
		cout << "imag p:";
		cin >> imag;
	}
	void Prt()
	{
		cout << real << "," << imag;
	}
	void SetReal(double re)
	{
		real = re;
	}
	void SetImag(double im)
	{
		imag = im;
	}
	double modulus(void)
	{
		double moduluss = sqrt(pow(real, 2) + pow(imag, 2));
		return moduluss;
	}
	complex add(complex& c)
	{
		complex cs;
		cs.real = real + c.real;
		cs.imag = imag + c.imag;
		return cs;
	}
	complex mult(complex& c)
	{
		complex cs;
		cs.real = real * c.real - imag * c.imag;
		cs.imag = real * c.imag + c.real * imag;
		return cs;
	}
};

