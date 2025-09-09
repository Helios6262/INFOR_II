// File exer1.cpp
// Tenun - PBM @ 2024
#include <iostream>
using namespace std;
void main(void)
{
int Num = 0; int Val = 0;
//Number of data
cout << "How many numbers do you want to generate:";
cin >> Num;  //Generation
for (int i = 0; i < Num; i++) {
	Val = (rand() * 100) / RAND_MAX; //Between 0 to 100
	cout << i << ": " << Val << endl;	//print the data
	}
}