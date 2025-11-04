#include "complex.h"

void main(void)
{
	complex c1, c2, c3;
	c1.SetData();
	c2.SetData();
	c3.SetData();

	double r, i; //c4

	cin >> r >> i;
	complex c4;
	c4.SetReal(r); c4.SetImag(i);

	complex mult= c4.mult(c1);
	mult.Prt();
	cout << "Finished";
}