#pragma once
using namespace std;
#include <iostream>
#include <string.h>

class student
{
	char name[20];
	double average;

public:
	student(char* n = (char*)"nigger", double a = 67)
	{
		strcpy_s(name, n);
		average = a;
	} //constructor
	void prt() {
		cout << name << "," << average << endl;
	}
	void get() {
		cout << "name avg: ?";
		cin >> name >> average;
	}
	~student(void) {
		cout << "DESTROYEEEED" << endl;
	}
};
