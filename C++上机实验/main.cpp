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
		Polynomial *pol1 = new Polynomial;
		cout << "�������2������ʽ��λ��:" << endl;
		int num1;
		cin >> num1;
		pol1 = new Polynomial(num1);
		pol1->Save(num1);
		cout << "�㴴���ĵڸ�����ʽΪ:" << endl;
		cout << endl;
		pol1->Show();
		cout << endl;

		cout << "����������Ĺ���:" << endl;
		cout << "1.����ʽ����:" << endl;
		
		int q;
		cin >> q;
		switch (q)
		{
		case 1:
		{

			pol1->Add();

			break;
		}

		default: cout << "ѡ�����" << endl; break;

		}

			
		cout << "����ʽ����Ϊ" << endl;
		pol->PrintfPolynomialSum();

		cout << "����������Ĺ���:" << endl;
		cout << "1.����ʽ���:" << endl;
		cout << "2.����ʽ���:" << endl;
		cout << "3.����ʽ�˻�:" << endl;
		cout << "4.����ʽ��ֵ:" << endl;
		int q1;
		cin >> q1;
		switch (q1)
		{
		case 1:
			{
			cout << "����ʽ��ͽ��" << endl;
			/*cout << (pol->ReSum() + pol1->ReSum()) << endl;*/
		
			Polynomial *pol2 = (*pol + *pol1);
			pol2->Show();
		
			break;
			}
		case 2:
			{
			cout << "����ʽ������" << endl;
			/*cout << (pol->ReSum() - pol1->ReSum()) << endl;*/
			Polynomial *pol2 = (*pol - *pol1);
			pol2->Show();
			break; 
			}
		case 3:
			{
			cout << "����ʽ�˻����" << endl;
			/*cout << (pol->ReSum() * pol1->ReSum()) << endl;*/
			Polynomial *pol2 = (*pol * *pol1);
			pol2->Show();
			break;
			}
		case 4:
			{
			cout << "����ʽ��ֵ���" << endl;
			cout << "��һ�����ʽ�����Ϊ��" << endl;
			/*cout << (pol->ReSum() = pol1->ReSum()) << endl;*/
			Polynomial *pol2 = (*pol = *pol1);
			pol2->Show();
			break;
			}
		default:
			{
				cout << "�������" << endl;
				break;
			}

		}

		delete pol;
		delete pol1;
		/*pol++;*/
	/*}*/
	return 0;

}




