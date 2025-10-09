#include<iostream>;
using namespace std;
#include<cmath>;
const int NUM = 10;
int num = 0;
void main() {
	double matA[NUM][NUM], matB[NUM][NUM], matC[NUM][NUM];
	cout << "num fil/col MatA&B"; cin >> num;
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			cout << "Mat A (" << i+1 << "," << j+1 << "): ?";
			cin >> matA[i][j];
			cout << "Mat B (" << i + 1 << "," << j + 1 << "): ?";
			cin >> matB[i][j];
			matC[i][j] = matA[i][j] + matB[i][j];
		}
	}
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			cout << "/" << matC[i][j] << "/";
		}
		cout << '\n';
	}
}
