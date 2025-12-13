#pragma once
#include <iostream>
using namespace std;

class employee
{
	char name[40];
	double salary=0;
public:
	employee(char* n = (char*)"", double s = 0.0):salary(s) {
		strcpy_s(name, n); cout << "Employee constructor\n";}
	void print_position(){
		cout << " Position not defined" << endl;
	}
	char* GetName() { return name;}
	employee prt() {
		cout << "Name: " << name << endl;
		cout << "Salary: " << salary << endl;
		return employee();
	}
	~employee() { cout << "Employee destructor\n";};
};

class Manager : public employee
{
public:
	Manager(char* n = (char*)"",double s=0.0): employee(n,s) { cout << "Manager constructor\n";
	}
	void print_position() { cout << " is a Manager" << endl; }
};

class Worker : public employee
{
public:
	Worker(char* n = (char*)"",double s = 0.0): employee(n,s) { cout << "Worker constructor\n";
	}
	void print_position() { cout << " is a Worker" << endl; }
};

class Officer : public Worker
{
public:
	Officer(char* n = (char*)"", double s = 0.0):Worker(n,s) { cout << "Officer constructor\n";
	}
	void print_position() { cout << " is an Officer" << endl;
	}
};
class Technician : public Officer
{
public:
	Technician(char* n = (char*)"",double s = 0.0):Officer(n,s) {
	cout << "Technician constructor\n";
	}
	void print_position() {cout << " is a Technician" << endl;
	}
};
