#include"Polynomial.h"
#include<iostream>
using namespace std;

void Polynomial::Save(int num)
{
	Polynomial::n = num;
	for (int i = 0; i < n; i++)
	{
			cout << "ÇëÊäÈëµÚ" << i+1 << "Î»:" <<endl;
			cin >> *(Polynomial::Number + i);
	}
	
}