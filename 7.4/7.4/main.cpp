#include <iostream>
using namespace std;
#include "point.h"

void main(void)
{
	point p1, p2;

	p1.AskSetdata();
	p2.AskSetdata();

	double distance= p1.distance(p2);
	cout << "distance between P1 and P2 " << distance;
}