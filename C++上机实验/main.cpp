#include<iostream>
#include"Polynomial.h"
using namespace std;

int main()
{
	int i , Number;
	//cout << "������Ҫ�Ķ���ʽ�����:" << endl;
	//cin >> Number;
	//Polynomial* pol = new Polynomial[Number];
	/*for (i = 0; i < Number; i++)
	{*/
	Polynomial pol;
		cout << "���������뱣��Ķ���ʽλ��:" << endl;
		int num;
		cin >> num;
		/*pol->Save(n);*/
		pol.Polynomial::Save(num);
		cout << "����������Ĺ���:" << endl;
		cout << "1.�������ʽ:" << endl;
		cout << "2.����ʽ����:" << endl;
		int p;
		cin >> p;
		switch (p)
		{
		case 1: pol.Show(); break;
		case 2: pol.Add(); break;
		}
		/*pol++;*/
	/*}*/
	return 0;

}
