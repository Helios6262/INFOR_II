#include <iostream>
using namespace std;

void main()
{
		int numeros = 0;
	int numero = 0;
	double average = 0;
	int max = 0;
	int min = RAND_MAX;
	cout << "Enter the number of values you want to input: ";
	cin >> numeros;
	for (int i = 0; i < numeros; i++)
	{
		numero = rand();
			if (numero == max && numero == min) {
				max = numero;
				min = numero;
			}

			else if (numero <= min) {
				min = numero;
			}
			else if (numero >= max) {
				max = numero;
			}
		average += numero;
	}
	average /= numeros;
	cout << "the min is: " << min << endl;
		cout << "the maximum is : " << max << endl;
		cout << "the average is : " << average << endl;
}
