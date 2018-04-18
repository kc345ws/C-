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
		if (*(Polynomial::Number + i) != 0)
		{
			/*cout << *(Polynomial::Number + i);*/
			if (Polynomial::n == 1 || i == (Polynomial::n) - 1)
			{
				if (j == 0)
					cout << *(Polynomial::Number + 0);
				else if (*(Polynomial::Number + i) < 0)
				{
					/*if (*(Polynomial::Number + i) != 1)
						cout << *(Polynomial::Number + i) << "x^" << j;*/
					/*if (*(Polynomial::Number + i) == 0)
						cout << "+" << "0";*/
					if(*(Polynomial::Number + i)==-1)
						cout << "-" << "x^" << j;
					else if(*(Polynomial::Number + i) != 0)
						cout << *(Polynomial::Number + i) << "x^" << j;
				}
				else
				{
					if (*(Polynomial::Number + i) == 1)
					cout << "+" << "x^" << j;
					else if (*(Polynomial::Number + i) != 0)
					cout << "+"<<*(Polynomial::Number + i) << "x^" << j;
				}
			}

			else
			{
				if (j == 0)
					cout << *(Polynomial::Number + 0);

				else if (*(Polynomial::Number + i) < 0)
				{
					if (*(Polynomial::Number + i) == -1)
					cout << "-"<< "x^" << j;
					else if((*(Polynomial::Number + i) != 0))
					cout << *(Polynomial::Number + i) << "x^" << j;
				}
				 else//>0
				 {


					 if (j == 0 && (*(Polynomial::Number + 0 )!= 0) )//第一个元素
					 
						 cout << *(Polynomial::Number + 0) << "x^" << j;
					
					
					 else
					 {

						 if(*(Polynomial::Number + i)==1)
						 cout << "+" << "x^" << j;
						 else if(*(Polynomial::Number + i) != 0)
						cout <<"+" <<*(Polynomial::Number + 0) << "x^" << j;

					 }
				 }

			}
		}
	}
}