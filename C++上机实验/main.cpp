#include<iostream>
#include"Polynomial.h"
using namespace std;

int main()
{
	int i , Number;
	//cout << "输入需要的多项式类个数:" << endl;
	//cin >> Number;
	//Polynomial* pol = new Polynomial[Number];
	/*for (i = 0; i < Number; i++)
	{*/
	Polynomial pol;
		cout << "请输入你想保存的多项式位数:" << endl;
		int num;
		cin >> num;
		/*pol->Save(n);*/
		pol.Polynomial::Save(num);
		cout << "请输入所需的功能:" << endl;
		cout << "1.输出多项式:" << endl;
		cout << "2.多项式计算:" << endl;
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
