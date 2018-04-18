#include<iostream>
#include"Polynomial.h"
using namespace std;

int main()
{
	/*int number;
	
	cout << "请输入多项式个数:" << endl;
	cin >> number;*/

	//Polynomial **pol = new Polynomial*[number];
	//Polynomial *Polfirst = *pol+0;

	///*for (int i = 0; i < number; i++)
	//{*/
	//	cout << "请输入第"<< i+1 <<"个多项式的位数:" << endl;
	//	int num;
	//	cin >> num;
	//	pol[i] = new Polynomial(num);
	//	pol[i]->Save(num);
	//	cout << "你创建的第" << i+1 << "个多项式为:" << endl;
	//	cout << endl;
	//	pol[i]->Show();
	//	cout << endl;
	//	pol++;
	///*}*/
		
		/*pol->Save(n);*/
		Polynomial *pol = new Polynomial;
		cout << "请输入第1个多项式的位数:" << endl;
		int num;
		cin >> num;
		pol = new Polynomial(num);
		pol->Save(num);
		cout << "你创建的第个多项式为:" << endl;
		cout << endl;
		pol->Show();
		cout << endl;
		
		
		cout << "请输入所需的功能:" << endl;
		cout << "1.多项式计算:" << endl;
		int p;
		cin >> p;
		switch (p)
		{
		case 1: 
		{
			
			pol->Add(); 
			
			break;
		}
		default: cout << "选择错误" << endl; break;
			
		}
		//**pol = *(Polfirst+0);
		//for (int i = 0; i < number; i++)
		//{
		//	delete pol[i];
		//	/*pol++;*/
		//}
		delete pol;
		/*pol++;*/
	/*}*/
	return 0;

}
