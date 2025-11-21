#include<iomanip>
#include<iostream>
#include<string>
using namespace std;


int main()
{
	string frase1; //Expression
	cout << "Write a Sentence:";
	getline(cin, frase1);
	cout << "Backwards:" << endl;
	int s=size(frase1);
	for (int i = s-1;i >= 0; i--) {
		cout << frase1[i];
	}
	string n1, n2;
	cout << "\nGive 2 names:"; cin >> n1 >> n2;
	if (n1 == n2) cout << "Equal names" << endl;
	else if (n1 < n2)
		cout << n1 << " is less than " << n2 << endl;
	else cout << n1 << " is greater than " << n2 << endl;
	string nt = n1 + n2;
	cout << "Together: " << nt << " Size=" << nt.size() << endl;
	cout << "\nEnd.." << endl;
	return 0;
} 