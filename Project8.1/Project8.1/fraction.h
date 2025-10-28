#pragma once
class fraction
{
	int num, den; 
public:
	fraction(int n = 1, int d = 1);  //constructor
	~fraction();  //destructor

	fraction add(fraction& f);
	void prt() { cout << "[" << num <<"/" << den << "]"; 
	}
};

	