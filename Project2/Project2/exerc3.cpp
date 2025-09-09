#include <iostream>
using namespace std;
void main()
{
	int Num = 0; int Val = 0; int cont=0; //number of data
	cout << "cuantos num genero?";
	cin >> Num;
	while (cont < Num) {
		Val = (rand() * 100) / RAND_MAX;
		cout << Val << endl;
		cont++;
	}
}