#pragma once
#include<iostream>
#ifndef Polynomial1

class Polynomial
{
public:
	void Save(int num);
	void Add();
	void Show();

	Polynomial(int p)
	{
		
		Number = new float[p];
		
	}
	Polynomial()
	{

		

	}

	~Polynomial()
	{
		delete[]Number;
		std::cout << "多项式已释放" << std::endl;
	
	}

	Polynomial(const Polynomial&a)
	{

	}

private:
	int n;
	float x;
	float* Number;
};

#endif