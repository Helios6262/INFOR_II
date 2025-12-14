#include<iostream>
using namespace std;
#define MAX 100 //num máximo de préstamos
#define INTERES 0.1 //interés diario en %. 

struct cuenta
{
	int numero; //pe 2001
	char* name; //puntero para nombre 
};
struct fecha
{
	int dia, mes, anyo;
};
struct prestamo
{
	cuenta cta; //cuenta asociada
	fecha faper; //fecha apertura
	double cantidad; //euros
};

void main() {
	int np = 0;
	prestamo lstPres[MAX]; //array de préstamos
	int nc = 0;
	cuenta lstCuenta[MAX]; //array de cuentas
	int opc = 0;
	while (1) {
		// mostrar el menu y hacer el resto del código
		cout << "** Gestion de Prestamos **\n" << "1.Abrir Cuenta\n" << "2.Abrir Prestamo\n" << "3.Pago Intereses\n" << "4.Reporte\n" << "5.Salir\n";
		cout << "       Opc:"; cin >> opc;
		if (opc == 1) {
			lstCuenta[nc].name = new char[100]; //(aqui reservamos memoria con NEW char)
			cout << "Dar Nombre: ";
			cin >> lstCuenta[nc].name;
			cout << "Dar Numero: ";
			cin >> lstCuenta[nc].numero; cout << endl;
			nc++;
		}
		else if (opc == 2) {
			if (nc == 0)
				break;
			else {
				int out = 0;
				int flag = 0;
				for (int i = 0; i < nc; i++) {
					cout << i + 1 << "  " << lstCuenta[i].name << "  " << lstCuenta[i].numero << endl;
				}
				cout << "Seleccione la cuenta: "; cin >> out;
				flag = out - 1;
				cout << "Cuenta Seleccionada: " << lstCuenta[flag].name << "  " << lstCuenta[flag].numero << endl;
				lstPres[flag].cta = lstCuenta[flag]; //ME CONFUNDIO MUCHO NO HABER PUESTO ESTO
				cout << "Dar Fecha (dd,mm,aa): ";
				cin >> lstPres[flag].faper.dia >> lstPres[flag].faper.mes >> lstPres[flag].faper.anyo;
				cout << "Cantidad (Euros): "; cin >> lstPres[flag].cantidad;
				np++;
			}
		}
		else if (opc == 3) {
			fecha fech;
			int num = 0;
			int inter = 0;
			cout << "Dar Fecha ACTUAL (dd,mm,aa): "; cin >> fech.dia >> fech.mes >> fech.anyo;
			cout << "Intereses Diarios " << INTERES << endl;
			cout << "Lista de prestamos y sus intereses:"<<endl;
			for (int i = 0; i < np; i++) {
				num = (fech.dia + fech.mes * 30 + fech.anyo * 360) - (lstPres[i].faper.dia + lstPres[i].faper.mes * 30 + lstPres[i].faper.anyo * 360);
				inter = INTERES * num * lstPres[i].cantidad / 100;
				cout << "Dias: " << num << "  Inter  " << inter << "  Monto:  " << lstPres[i].cantidad << "Fecha" << lstPres[i].faper.dia << "/" << lstPres[i].faper.mes << "/" << lstPres[i].faper.anyo << "Cuenta" << lstPres[i].cta.name << "  " << lstPres[i].cta.numero;
			}
		}
		else if (opc == 4) {
		
		}
		else break;
	}
}