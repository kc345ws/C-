#pragma once
#include<iostream>
#ifndef Polynomial1
#include<vector>
using namespace std;

class Polynomial
{
public:
	void Save(int num);
	void Add();
	void Show();
	void PrintfPolynomialSum();
	/*Polynomial operator +(Polynomial* a);*/
	friend Polynomial* operator*(Polynomial & a, Polynomial & b);
	friend Polynomial* operator-(Polynomial & a, Polynomial & b);
	friend Polynomial* operator+(Polynomial & a, Polynomial & b);
	Polynomial* operator = (Polynomial & a);

	float *GetNumber()
	{
		return Number;
	}
	float &ReSum()
	{
		return Sumadd;
	}
	void GetN(Polynomial *point);
	
	/*float &ReXJ()
	{
		return(Sumadd);
	}*/
	/*Polynomial(int p)
	{	
		Number = new float[p];
		PolynomialSum++;
	}*/
	Polynomial(int p); 

	Polynomial();
	

	~Polynomial();
	
	Polynomial(const Polynomial&a);
	
	


private:
	int n;
	float x;
	float* Number;
	static int PolynomialSum;
	float Sumadd;
	vector<int> cishu;
	/*float XJ;
	float CJ;
	float fz;*/
};

#endif