#include <iostream>
using namespace std;
#include "cuenta.h"

double cuenta::interes_base = 0.001;
void main()
{
	/* Si lo desea puede asignar valores a estos objetos mediante
	funciones, no es necesario que lo haga a través de constructores.Esto
	es solo un ejemplo*/
	cuenta c1((char*)"Pedro", 1000);
	renta_mixta m1((char*)"Maria", 1000, 0.2, 0.05);
	renta_fija f1((char*)"Paco", 1000, 0.05);
	// Sigue más adelante
	cout << c1.Gasto(200) << endl;
	cout << c1.Gasto(1000) << endl;
	cout << m1.Gasto(200) << endl;
	cout << f1.Gasto(200) << endl;
	// Sigue más adelante
	cout << endl;
	c1.prt();
	m1.prt();
	f1.prt();
	// Sigue más adelante
	cout << endl;
	cout << c1.Gasto(10);
	cout << c1.Gasto(20);
	cout << c1.Gasto(30);
	cout << c1.Gasto(40);
	cout << c1.Gasto(50);
	cout << endl << endl;
	c1.historial(3);
	cout << endl;
	c1.historial(40);
	// Sigue más adelante
	cout << endl;
	c1.prt();
	m1.prt();
	f1.prt();
	cout << m1.transferencia(c1, 200) << endl;
	m1.prt();
	c1.prt();
	cout << f1.transferencia(m1, 25) << endl;
	f1.prt();
	m1.prt();
	cout << c1.transferencia(f1, 5000) << endl;
	c1.prt();
	m1.prt();
	c1.historial(10);

	// Sigue más adelante
}