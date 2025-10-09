using namespace std;
#include <iostream>;

struct frac {
	int num[4];
	int den[4];
}frac;

void main() {
	double f1Xf2;
	double fimasf2;
	double multiplier;
	cout << "frac 1 numerator & denominator? :";
	cin >> frac.num[1] >> frac.den[1];
	cout << "frac 2 numerator & denominator? :";
	cin >> frac.num[2] >> frac.den[2];
	frac.num[3] = frac.num[1] * frac.num[1];
	frac.den[3] = frac.den[2] * frac.den[2];
	cout << frac.num[3] << '\n' << "_\n" << frac.den[3]<< '\n';
	if (frac.den[1] > frac.den[2]){
		multiplier = frac.den[1] / frac.den[2];
		frac.den[4] = frac.den[1] / multiplier;
		frac.num[4] = frac.num[1] / multiplier;
	}
	else {
		multiplier = frac.den[2] / frac.den[1];
		frac.den[4] = frac.den[2] / multiplier;
		frac.num[4] = frac.num[2] / multiplier;
	}
	cout << frac.num[4] << '\n' << "_\n" << frac.den[4];

}

