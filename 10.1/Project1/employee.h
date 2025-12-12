#pragma once
#include <iostream>
using namespace std;

class employee
{
	char name[40];
public:
	employee(char* n = (char*)"") {
		strcpy_s(name, n); cout << "Employee constructor\n";}
	void print_position(){
		cout << " Position not defined" << endl;
	}
	char* GetName() { return name;}
	~employee() { cout << "Employee destructor\n";};
};

class Manager : public employee
{
public:
	Manager(char* n = (char*)""): employee(n) { cout << "Manager constructor\n";
	}
	void print_position() { cout << " is a Manager" << endl; }
};

class Worker : public employee
{
public:
	Worker(char* n = (char*)""): employee(n) { cout << "Worker constructor\n";
	}
	void print_position() { cout << " is a Worker" << endl; }
};

class Officer : public Worker
{
public:
	Officer(char* n = (char*)""):Worker(n) { cout << "Officer constructor\n";
	}
	void print_position() { cout << " is an Officer" << endl;
	}
};
class Technician : public Officer
{
public:
	Technician(char* n = (char*)""):Officer(n) {
	cout << "Technician constructor\n";
	}
	void print_position() {cout << " is a Technician" << endl;
	}
};