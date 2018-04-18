#include"Polynomial.h"
#include<iostream>
using namespace std;

void Polynomial::Add()
{
	int x, i, j, k;
	float Sum = 0;
	cout << "请输入x的值:" << endl;
	cin >> x;
	k = x;
	for (i = 0; i < Polynomial::n; i++)
	{
		for(j = 0; j <= i; j++)
		{
			if (j == 0)
				k = 1;
			else if (j == 1)
				k = x;
			else
				k = x * x;
		}
		Sum =Sum + (k * (*(Polynomial::Number + i)));
	}
	cout << "所求多项式的值为:" << endl;
	if (Sum<10000000000 || Sum>-10000000000)
		cout << Sum << endl;
	else
		cout << "超出范围" << endl;
	Polynomial::Sumadd = Sum;
}