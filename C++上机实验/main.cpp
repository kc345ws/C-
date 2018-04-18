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
		Polynomial *pol1 = new Polynomial;
		cout << "请输入第2个多项式的位数:" << endl;
		int num1;
		cin >> num1;
		pol1 = new Polynomial(num1);
		pol1->Save(num1);
		cout << "你创建的第个多项式为:" << endl;
		cout << endl;
		pol1->Show();
		cout << endl;

		cout << "请输入所需的功能:" << endl;
		cout << "1.多项式计算:" << endl;
		
		int q;
		cin >> q;
		switch (q)
		{
		case 1:
		{

			pol1->Add();

			break;
		}

		default: cout << "选择错误" << endl; break;

		}

			
		cout << "多项式个数为" << endl;
		pol->PrintfPolynomialSum();

		cout << "请输入所需的功能:" << endl;
		cout << "1.多项式求和:" << endl;
		cout << "2.多项式相减:" << endl;
		cout << "3.多项式乘积:" << endl;
		cout << "4.多项式赋值:" << endl;
		int q1;
		cin >> q1;
		switch (q1)
		{
		case 1:
			{
			cout << "多项式求和结果" << endl;
			/*cout << (pol->ReSum() + pol1->ReSum()) << endl;*/
		
			Polynomial *pol2 = (*pol + *pol1);
			pol2->Show();
		
			break;
			}
		case 2:
			{
			cout << "多项式相减结果" << endl;
			/*cout << (pol->ReSum() - pol1->ReSum()) << endl;*/
			Polynomial *pol2 = (*pol - *pol1);
			pol2->Show();
			break; 
			}
		case 3:
			{
			cout << "多项式乘积结果" << endl;
			/*cout << (pol->ReSum() * pol1->ReSum()) << endl;*/
			Polynomial *pol2 = (*pol * *pol1);
			pol2->Show();
			break;
			}
		case 4:
			{
			cout << "多项式赋值结果" << endl;
			cout << "第一项多项式结果变为：" << endl;
			/*cout << (pol->ReSum() = pol1->ReSum()) << endl;*/
			Polynomial *pol2 = (*pol = *pol1);
			pol2->Show();
			break;
			}
		default:
			{
				cout << "输入错误" << endl;
				break;
			}

		}

		delete pol;
		delete pol1;
		/*pol++;*/
	/*}*/
	return 0;

}




