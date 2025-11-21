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
using namespace std;
class vehicle
{
	string brand;
	int hp;
public:
	vehicle(string bd = "BYD", int h = 100) : brand(bd), hp(h) {};
	void prt() { cout << brand << "," << hp << endl; }
};
int main()
{
	vector<vehicle> lst;
	vehicle v1("Toyota", 150);
	lst.push_back(v1);
	lst.push_back(vehicle("vw", 115));
	lst.push_back(vehicle("mazda", 200));
	lst.push_back(vehicle()); //default
	lst.push_back(vehicle("fiat", 150));
	int len = lst.size();
	vector<vehicle>::iterator it1 = lst.begin();
	it1++;
	for (auto j = lst.begin(); j != lst.end(); j++) {
		vehicle v = *j; //igual al valor de j (
		v.prt();
	}
	int pos = 0;
	cout << "Which object to erase?"; cin >> pos;
	cout << "Object to erase:";
	lst.at(pos).prt();
	lst.erase(lst.begin() + pos);
	len = lst.size();
	cout << "\n------- Other way..\n";
	for (int n = 0;n < len;n++) {
		vehicle v = lst[n];
		v.prt();
	}
	return 0;
}

