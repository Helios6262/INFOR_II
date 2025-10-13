#include <iostream>;
#include <stdlib.h>
using namespace std;

int** matrixcreate(int& row, int& col) {
	int **mat;
	cout << "ROW: ";cin >> row;
	cout << "COL: ";cin >> col;
	mat = new int* [row];
	for (int i = 0; i < row; i++) {
			mat[i] = new int[row];
	}
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
		 mat[i][j]=rand()%100;
		}
	}
	return mat; //devuelve la direccion base de la matriz
};

int** matrixemptycreate(int& row, int& col) {
	int** mat;
	cout << "empty ROW: "; cin >> row;
	cout << "empty COL: "; cin >> col;
	mat = new int* [row];
	for (int i = 0; i < row; i++) {
		mat[i] = new int[row];
	}
	return mat; //devuelve la direccion base de la matriz
};

int** matsum(int **matt, int** matA, int** matB, int row, int col) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			matt[i][j] = matA[i][j] + matB[i][j];
		}
	}
	return matt;
}

void matrixptr(int** mat, int row, int col) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << mat[i][j] << ";";
		}
		cout << '\n';
	}
};

int main() {
	int fila, columna;
	int** MATRIXA = matrixcreate(fila, columna);
	int** MATRIXB = matrixcreate(fila, columna);
	int** MATRIXSUM = matrixemptycreate(fila, columna);
	MATRIXSUM = matsum(MATRIXSUM, MATRIXA, MATRIXB, fila, columna);
	matrixptr(MATRIXB, fila, columna);
	matrixptr(MATRIXA, fila, columna);
	matrixptr(MATRIXSUM, fila, columna);
	delete[] MATRIXA;
	delete[] MATRIXB;
	delete[] MATRIXSUM;
	return 0;
}