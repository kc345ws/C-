#include"Polynomial.h"
#include<iostream>
using namespace std;

void Polynomial::Save(int num)
{
	int j;
	Polynomial::n = num;
	for (int i = 0; i < n; i++)
	{
			cout << "�������" << i+1 << "λϵ��:" <<endl;
			cin >> *(Polynomial::Number + i);
			/*vector<int>::iterator iter = cishu.begin();*/
			for (j = 0; j < i; j++)
			{

			}
			Polynomial::cishu.push_back(j);
	}
	
}