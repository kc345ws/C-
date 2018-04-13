#pragma once

#ifndef Polynomial1

class Polynomial
{
public:
	void Save(int num);
	void Add();
	void Show();

	Polynomial()
	{

	}

	~Polynomial()
	{
		delete []Number;
	}

	Polynomial(const Polynomial&a)
	{

	}

private:
	int n;
	float x;
	float* Number= new float[n];
};

#endif