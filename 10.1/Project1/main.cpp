#include <iostream>
#include "Employee.h"
using namespace std;


void main()
{
    employee Rafa((char*)"Rafa",200);
	Manager Mario((char*)"Mario",400);
	Worker Anton((char*)"Anton",150);
	Officer Luis((char*)"Luis",100);
	Technician Pablo((char*)"Pablo",70);

	cout << "With object names:\n" << endl;
	cout << Rafa.GetName();
	Rafa.print_position();
	cout << Mario.GetName();
	Mario.print_position();
	cout << Anton.GetName();
	Anton.print_position();
	cout << Luis.GetName();
	Luis.print_position();
	cout << Pablo.GetName();
	Pablo.print_position();

	Rafa.prt();
	Mario.prt();
	Anton.prt();
	Luis.prt();
	Pablo.prt();
}