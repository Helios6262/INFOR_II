#include <iostream>
#include "Employee.h"
using namespace std;


void main()
{
	Employee Rafa((char*)"Rafa");
	Manager Mario((char*)"Mario");

	cout << "With object names:\n" << endl;
	cout << Rafa.GetName();
	Rafa.print_position();
	cout << Mario.GetName();
	Mario.print_position();
}