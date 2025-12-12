#include <iostream>
#include "Employee.h"
using namespace std;


void main()
{
    employee Rafa((char*)"Rafa");
	Manager Mario((char*)"Mario");
	Worker Anton((char*)"Anton");
	Officer Luis((char*)"Luis");
	Technician Pablo((char*)"Pablo");

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
}