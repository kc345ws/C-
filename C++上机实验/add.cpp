#include"Polynomial.h"
#include<iostream>
using namespace std;

void Polynomial::Add()
{
	int x, i, j;
	float Sum = 0;
	cout << "请输入x的值:" << endl;
	cin >> x;
	for (i = 0; i < Polynomial::n; i++)
	{
		for(j = 0; j < Polynomial::n; j++)
		{
			x *= x;
		}
		Sum += *(Polynomial::Number + i);
	}
	cout << "所求多项式的值为:" << endl;
	if (Sum<100000000 || Sum>-100000000)
		cout << Sum << endl;
	else
		cout << "超出范围" << endl;
}