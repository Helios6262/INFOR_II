#pragma once
using namespace std;
#include <iostream>;
class point
{
	double x;
	double y;
public:
	void AskSetdata(void)//Ask to enter data from console
	{
		cout << "ingresa x e y respectivamente: ";
		cin >> x >> y;
	}
	double distance(point& c2)//distance between points
	{
		return sqrt(pow(c2.x - x, 2) + pow(c2.y - y, 2));
	}
	~point() {};
};