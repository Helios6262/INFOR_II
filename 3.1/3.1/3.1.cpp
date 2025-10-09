using namespace std;
#include <iostream>;

const int NUM = 10;

void main(){
	double x[NUM], y[NUM];
	double d[NUM-1];
	double DMIN;
	int num;
	cout << "numero de posiciones (del 1 al 10): "; cin >> num;
		for (int i = 0; i <= num - 1; i++) {
			cout << "x" << i+1 << " :";
			cin >> x[i];
			cout << "y" << i + 1 << " :";
			cin >> y[i];
			if (i == 0) continue;
			else {
				d[i-1] = sqrt(pow((x[i] - x[i - 1]), 2) + pow((y[i] - y[i - 1]), 2));
				cout << "distance " << i + 1 << " :" << d[i-1] << '\n';
				if (i == 1) {
					DMIN = d[i - 1]; continue;
				}
			else {
				if (d[i - 1] <= DMIN) {
					DMIN = d[i - 1];
				}

			}
			}
		}
		cout << "distance min is:" << DMIN;
}
