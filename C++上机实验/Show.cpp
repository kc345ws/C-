#include<iostream>
#include"Polynomial.h"
#include<vector>
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
		
		
		//iter++;
		if (*(Polynomial::Number + i) != 0)
		{
			/*cout << *(Polynomial::Number + i);*/
			if (Polynomial::n == 1 || i == (Polynomial::n) - 1)//多项式第一项或最后一项
			{
				if (j == 0)//如果次数为0
					cout << *(Polynomial::Number + 0);

				else if (*(Polynomial::Number + i) < 0)//如果系数小于0
				{
					/*if (*(Polynomial::Number + i) != 1)
						cout << *(Polynomial::Number + i) << "x^" << j;*/
					/*if (*(Polynomial::Number + i) == 0)
						cout << "+" << "0";*/
					if(*(Polynomial::Number + i)==-1)//如果系数为-1
						cout << "-" << "x^" << cishu[i];
					else if(*(Polynomial::Number + i) != 0)//如果系数不为0且小于0
						cout << *(Polynomial::Number + i) << "x^" << cishu[i];
				}

				else
				{
					if (*(Polynomial::Number + i) == 1)
					cout << "+" << "x^" << cishu[i];
					else if (*(Polynomial::Number + i) != 0)
					cout << "+"<<*(Polynomial::Number + i) << "x^" << cishu[i];
				}
			}

			else
			{
				if (j == 0)
					cout << *(Polynomial::Number + 0);

				else if (*(Polynomial::Number + i) < 0)
				{
					if (*(Polynomial::Number + i) == -1)
					cout << "-"<< "x^" << cishu[i];
					else if((*(Polynomial::Number + i) != 0))
					cout << *(Polynomial::Number + i) << "x^" << cishu[i];
				}
				 else//>0
				 {


					 if (j == 0 && (*(Polynomial::Number + 0 )!= 0) )//第一个元素
					 
						 cout << *(Polynomial::Number + 0) << "x^" << cishu[i];
					
					
					 else
					 {

						 if(*(Polynomial::Number + i)==1)
						 cout << "+" << "x^" << cishu[i];
						 else if(*(Polynomial::Number + i) != 0)
						cout <<"+" <<*(Polynomial::Number + 0) << "x^" << cishu[i];

					 }
				 }

			}
		}
	}
	/*cout << endl;
	for (int p1 = 0; p1 < n; p1++)
	{
		cout << cishu[p1] << endl;
	}*/

}

//Polynomial Polynomial::operator+(Polynomial * a)
//{
//	return Polynomial();
//}

//Polynomial Polynomial::operator+(Polynomial * a, Polynomial * b)
//{
//	return Polynomial();
//}

//Polynomial Polynomial::operator=(Polynomial & a)
//{
//	return Polynomial();
//}

//Polynomial Polynomial::operator=(Polynomial & a, Polynomial & b)
//{
//	return Polynomial();
//}
