#include<iostream>
#include"Polynomial.h"
using namespace std;

int main()
{
	/*int number;
	
	cout << "���������ʽ����:" << endl;
	cin >> number;*/

	//Polynomial **pol = new Polynomial*[number];
	//Polynomial *Polfirst = *pol+0;

	///*for (int i = 0; i < number; i++)
	//{*/
	//	cout << "�������"<< i+1 <<"������ʽ��λ��:" << endl;
	//	int num;
	//	cin >> num;
	//	pol[i] = new Polynomial(num);
	//	pol[i]->Save(num);
	//	cout << "�㴴���ĵ�" << i+1 << "������ʽΪ:" << endl;
	//	cout << endl;
	//	pol[i]->Show();
	//	cout << endl;
	//	pol++;
	///*}*/
		
		/*pol->Save(n);*/
		Polynomial *pol = new Polynomial;
		cout << "�������1������ʽ��λ��:" << endl;
		int num;
		cin >> num;
		pol = new Polynomial(num);
		pol->Save(num);
		cout << "�㴴���ĵڸ�����ʽΪ:" << endl;
		cout << endl;
		pol->Show();
		cout << endl;
		
		
		cout << "����������Ĺ���:" << endl;
		cout << "1.����ʽ����:" << endl;
		int p;
		cin >> p;
		switch (p)
		{
		case 1: 
		{
			
			pol->Add(); 
			
			break;
		}
		default: cout << "ѡ�����" << endl; break;
			
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
