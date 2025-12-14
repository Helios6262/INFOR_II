#pragma once
#include <iostream>
#include <cstring> // Include for strcpy_s

using namespace std;

class cuenta
{
private:
	static double interes_base;
	char titular[20];
protected:
	double* saldo= new double[100]; //se almacenará la evolución del saldo de la cuenta según se vayan realizando movimientos
	int cont=0; //en qué posición de dicho array “saldo” se encuentra actualmente.
public:
	cuenta(char* t = (char*)"", double i = 0) { interes_base = i, strcpy_s(titular, t), saldo[cont] = interes_base, cout << "constructor"; }
	// añada el código necesario
	~cuenta() { delete[] saldo; }
	bool Gasto(double x) {
		if (x < 0 || x > saldo[cont]) {
			return 0;
		}
		else {
			cont++;
			saldo[cont] = saldo[cont - 1] - x;
			return 1;
		}
	}
	/*Tenga en cuenta que esta función debe comprobar si hay saldo en la cuenta de origen (se
corresponde con el objeto que llama a la función)*/
	bool transferencia(cuenta& c, double cant) {
		if (Gasto(cant) == 1) { //el cont ya hizo + 1
			c.cont++;
			c.saldo[c.cont] = c.saldo[c.cont - 1] + cant;
			return 1;
		}
		else return 0;
	}
	void prt() { cout << "Titular: " << titular << " Saldo: " << saldo[cont] << endl; };
	void historial(int num) {
		if (num >= cont)
		{
			num = cont;
		}
		for(int i=cont-num; i<=cont; i++) {
			cout << i <<":    " << saldo[i] << endl;
		}
	}
};
class renta_mixta : public cuenta
{
	double interes_fijo; //se corresponde con el rendimiento(en tanto por uno) al que se remunera el capital depositado a interés fijo
	double prop_variable; //indica la proporción (en tanto por uno) de capital invertido en interés variable respecto del total
public:
	renta_mixta(char* t = (char*)"",double i = 0, double p_v = 0, double i_f = 0) : cuenta(t,i) { prop_variable = p_v; interes_fijo = i_f; }
	bool Gasto(double x) { return 0; };
};

class renta_fija : public renta_mixta
{
public:
	renta_fija(char* t = (char*)"", double i = 0, double i_f = 0) : renta_mixta(t,i, 0, i_f) {}
	bool Gasto(double x) { return 0; };
	// añada el código necesario
};