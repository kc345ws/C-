#include"Polynomial.h"
#include<iostream>
using namespace std;

void Polynomial::Add()
{
	int x, i, j;
	float Sum = 0;
	cout << "������x��ֵ:" << endl;
	cin >> x;
	for (i = 0; i < Polynomial::n; i++)
	{
		for(j = 0; j < Polynomial::n; j++)
		{
			x *= x;
		}
		Sum += *(Polynomial::Number + i);
	}
	cout << "�������ʽ��ֵΪ:" << endl;
	if (Sum<100000000 || Sum>-100000000)
		cout << Sum << endl;
	else
		cout << "������Χ" << endl;
}