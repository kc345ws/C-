#include"Polynomial.h"
#include<iostream>
using namespace std;

void Polynomial::Save(int num)
{
	int j;
	Polynomial::n = num;
	for (int i = 0; i < n; i++)
	{
			cout << "请输入第" << i+1 << "位系数:" <<endl;
			cin >> *(Polynomial::Number + i);
			/*vector<int>::iterator iter = cishu.begin();*/
			for (j = 0; j < i; j++)
			{

			}
			Polynomial::cishu.push_back(j);
	}
	
}