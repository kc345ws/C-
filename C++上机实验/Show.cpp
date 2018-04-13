#include<iostream>
#include"Polynomial.h"
using namespace std;

void Polynomial::Show()
{
	int i, j;
	for (i = 0; i < Polynomial::n; i++)
	{
		/*if (*(Polynomial::Number + i) != 0)
		cout << *(Polynomial::Number + i);*/
		for (j = 0; j < i; j++)
		{
			
		}
		if (*(Polynomial::Number + i) != 0 )
		{
			cout << *(Polynomial::Number + i);
			if((Polynomial::Number[1])==0)
			cout << "x^" << j ;
			else
			cout << "x^" << j << "+";
		}
	}
}