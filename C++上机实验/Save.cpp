#include"Polynomial.h"
#include<iostream>
using namespace std;

void Polynomial::Save(int num)
{
	Polynomial::n = num;
	for (int i = 0; i < n; i++)
	{
			cout << "请输入第" << i+1 << "位系数:" <<endl;
			cin >> *(Polynomial::Number + i);
	}
	
}