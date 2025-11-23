/*#include <iostream>
#include <vector>
using namespace std;
int main()
{
	srand(time(NULL)); //TO RANDOMIZE 
	vector<double> v1;
	int num = 0;
	cout << "Give num:";
	cin >> num;
	for (int i = 0;i < num;i++) {
		double val = rand() * 100.0 / RAND_MAX;
		v1.push_back(val);
	}
	int len = v1.size();
	for (int i = 0;i < len;i++) {
		cout << i << ":" << v1[i] << endl;
	}
	//otra forma
	int pos = 0;
	cout << "Erase?"; cin >> pos;
	v1.erase(v1.begin() + pos);
	cout << "--------------\n";
	pos = 0;
	for (auto it = v1.begin(); it != v1.end();it++, pos++) {
		cout << pos << ":" << *it << endl;
	}
	v1.clear();
	return 0;
}*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class date
{
	int day, mnth, yr;
public:
	date(int d = 01, int m = 01, int y = 1970) : day(d), mnth(m),yr(y) {}; //constructor // ()<- asigna los valores por defecto ej yr(y)->yr=y=1970
	void prt() { cout << day << "/" << mnth << "/" << yr; };
	void add() { cin >> day >> mnth >> yr; }
	bool iswithin(date d1, date d2) {
		if (yr > d1.yr && yr < d2.yr) {
			if (d1.yr * 365 + d1.mnth * 30 + d1.day < yr * 365 + mnth * 30 + day && yr * 365 + mnth * 30 + day < d2.yr * 365 + d2.mnth * 30 + d2.day) {
				return true;
			}
		}
		else {
			return false;
		}
	}
};
class vehicle
{
	string brand;
	int hp;
	date reg;
public:
	vehicle(string bd = "BYD", int h = 100, date r = date()) : reg(r), hp(h), brand(bd) {}; //date() es el constructor por defecto de la clase date !!!
	void prt() { cout << brand << " , " << hp << " , "; reg.prt() ; cout << endl; }
	void add() {
		cin >> brand >> hp; reg.add();
	}
	void getdate(date& d) { d = reg; } //pasar por referencia el objeto date d para asignarle el valor del atributo reg de la clase vehicle
};
int main()
{
	vector<vehicle> lst; //vector que puede guardar objetos de la clase vehiculo.
	date d1(12, 05, 2020);
	vehicle v1("Toyota", 150, d1); 
	lst.push_back(v1);
	lst.push_back(vehicle("vw", 115, date(02,05,2027)));
	lst.push_back(vehicle("mazda", 200));
	lst.push_back(vehicle()); //default
	lst.push_back(vehicle("fiat", 150));
	int len = lst.size();
	int num = 0;
	while (true){
	cout << "Choose an option " << '\n' << "*****************" << '\n' << "1.Add car" << '\n' << "2.Print the ist of cars" << '\n' << "3.Erase car" << '\n' << "4.Find the cars registered between two dates" << '\n' << "5.EXIT";
	cin >> num;
	if (num == 2)
	{
		//vector<vehicle>::iterator it1 = lst.begin(); // otra forma de crear un iterador para recorrer el vector lst con la funcion iterator (no es necesaria)
		//it1++;
		for (auto j = lst.begin(); j != lst.end(); j++) { //iterador j que recorre el vector lst y desreferencia el valor del puntero j para asignarlo a v
			vehicle v = *j; //igual al valor de el objeto apuntado por j
			v.prt();
		}
	}
	else if (num == 3)
	{
		int pos = 0;
		cout << "Which object to erase?"; cin >> pos;
		cout << "Object to erase:";
		lst.at(pos).prt();
		lst.erase(lst.begin() + pos);
		len = lst.size();
	}
	else if (num == 1) {
		cout << "Add your vehicle withe this values respectively: 1.brand 2.horsepower 3.Register data (1.dd 2.mm 3.yyyy)";
		vehicle v;
		v.add();
		lst.push_back(v);
		len = lst.size();
	}
	else if (num == 4){
		cout << "Search vehicles within the values you choose (1.dd1 2.mm1 3.yyyy1 4.dd2 5.mm2 6.yyyy2)";
		date d, d1, d2;
		vehicle v;
		d1.add(); d2.add();
		for (auto k = lst.begin(); k != lst.end(); k++) {
			v = *k; //asignar a v el valor del objeto vehicle apuntado por k
			v.getdate(d);
			if (d.iswithin(d1, d2) == true) {
				v.prt();
			}
		}
	}
	/*cout << "\n------- Other way..\n";
	for (int n = 0;n < len;n++) {
		vehicle v = lst[n];
		v.prt();
	}*/
	if(num==5){
		break;
	}
	}
}

