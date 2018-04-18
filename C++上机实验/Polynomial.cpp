#include"Polynomial.h"
#include<iostream>
void GetN(Polynomial *point);
int Polynomial::PolynomialSum = 0;

Polynomial::Polynomial()
{
//	Number = new float[p];
//	PolynomialSum++;
//	Polynomial::n = p;
}

Polynomial::Polynomial(int p)
{
	Number = new float[p];
	PolynomialSum++;
	Polynomial::n = p;
}

Polynomial::~Polynomial()
{
	delete[]Number;
	std::cout << "多项式已释放" << std::endl;
}

Polynomial::Polynomial(const Polynomial&a)
{

}

void Polynomial::PrintfPolynomialSum()
{
	
	std::cout << PolynomialSum << std::endl;
}


//Polynomial Polynomial::operator +(Polynomial* a)
//{
//	Polynomial*b;
//	return(b->ReSum() + a->ReSum());
//}


Polynomial* operator*(Polynomial & a, Polynomial & b)
{
	int i;
	Polynomial *d;
	if ((a.n) > (b.n))
	{
		Polynomial *c = new Polynomial(a.n);
		GetN(c);
		for (i = 0; i < b.n; i++)
		{
			c->Number[i] = a.Number[i] * b.Number[i];
			/*c->cishu[i] = a.cishu[i] * b.cishu[i];*/
			c->cishu.push_back(a.cishu[i] * b.cishu[i]);
		}
		for (int j = i; j < a.n; j++)
		{
			c->Number[j] = a.Number[j];
			/*c->cishu[j] = a.cishu[j] * 1;*/
			c->cishu.push_back(a.cishu[j]);
		}
		d = c;
	}

	else
	{
		Polynomial *c = new Polynomial(b.n);
		GetN(c);
		for (i = 0; i < a.n; i++)
		{
			c->Number[i] = a.Number[i] * b.Number[i];
			/*c->cishu[i] = a.cishu[i] * b.cishu[i];*/
			c->cishu.push_back(a.cishu[i] * b.cishu[i]);
		}
		for (int j = i; j < b.n; j++)
		{
			c->Number[j] = b.Number[j];
			/*c->cishu[j] = b.cishu[j] * 1;*/
			c->cishu.push_back(b.cishu[j]);
		}
		d = c;
	}
	//cout << d->n << endl;
	//for (int pp = 0; pp < d->n; pp++)
	//	cout << d->cishu[pp] << endl;
	return d;
}

Polynomial* operator-(Polynomial & a, Polynomial & b)
{
	int i;
	Polynomial *d;
	if ((a.n) >= (b.n))
	{
		Polynomial *c = new Polynomial(a.n);
		GetN(c);
		for (i = 0; i < b.n; i++)
		{
			c->Number[i] = a.Number[i] - b.Number[i];
			c->cishu.push_back(i);
		}
		for (int j = i; j < a.n; j++)
		{
			c->Number[j] = a.Number[j];
			c->cishu.push_back(j);
		}
		d = c;
	}

	else
	{
		Polynomial *c = new Polynomial(b.n);
		GetN(c);
		for (i = 0; i < a.n; i++)
		{
			c->Number[i] = a.Number[i] - b.Number[i];
			c->cishu.push_back(i);
		}
		for (int j = i; j < b.n; j++)
		{
			c->Number[j] = b.Number[j];
			c->cishu.push_back(j);
		}
		d = c;
	}

	return d;
}

//Polynomial operator+(Polynomial & a, Polynomial & b)
//{
//	Polynomial c;
//	c.Sumadd = a.Sumadd + b.Sumadd;
//
//	return c.Sumadd;
//}

Polynomial* operator+(Polynomial & a, Polynomial & b)
{
	/*Polynomial* c = new Polynomial;*/
	int i;
	Polynomial *d;
	if((a.n) > (b.n) )
	{
		Polynomial *c = new Polynomial(a.n);
		GetN(c);
		for (i = 0; i < b.n; i++)
		{
			c->Number[i] = a.Number[i] + b.Number[i];
			c->cishu.push_back(i);
		}
		for (int j = i; j < a.n; j++)
		{
			c->Number[j] = a.Number[j];
			c->cishu.push_back(j);
		}
		d = c;
	}

	else
	{
		Polynomial *c = new Polynomial(b.n);
		GetN(c);
		for (i = 0; i < a.n; i++)
		{
			c->Number[i] = a.Number[i] + b.Number[i];
			c->cishu.push_back(i);
		}
		for (int j = i; j < b.n; j++)
		{
			c->Number[j] = b.Number[j];
			c->cishu.push_back(j);
		}
		d = c;
	}
	
	return d;
}

Polynomial*  Polynomial::operator=(Polynomial & a)
{
	int i;

	
	
		Polynomial *c = new Polynomial(a.n);
		GetN(c);
		for (i = 0; i < a.n; i++)
		{
			c->Number[i] = a.Number[i];
			c->cishu.push_back(i);
		}
		
	return c;
}

void Polynomial::GetN(Polynomial * point)
{
	int * flag = (int*)point;
}

void GetN(Polynomial *point)//指针访问私有数据成员
{
	int * flag = (int*)point;
}


