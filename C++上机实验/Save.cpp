#include"Polynomial.h"
#include<iostream>
using namespace std;

void Polynomial::Save(int num)
{
	Polynomial::n = num;
	for (int i = 0; i < n; i++)
	{
			cout << "�������" << i+1 << "λϵ��:" <<endl;
			cin >> *(Polynomial::Number + i);
	}
	
}