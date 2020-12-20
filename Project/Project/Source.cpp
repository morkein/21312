

#include "feature1.h"
#include "feature2.h"
#include "feature3.h"
#include <iostream>
using namespace std;

int main()
{
	double a, b, result;	//��������� �������
	int choice;
	setlocale(LC_ALL, "rus");

	//���� ����������
	cout << "������� �������� A" << endl;
	cin >> a;
	cout << "������� �������� B" << endl;
	cin >> b;

	//���� ��������
	cout << "������� ����� ���������� ��������:" << endl;
	cout << "1. ��������" << endl << "2. ���������" << endl;
	cout << "3. ���������" << endl << "4. �������" << endl;
	cin >> choice;

	//�������� �����
	switch (choice)
	{
	case 1:
		cout << a << " + " << b << " = " << Sum(a, b) << endl;  //��������
		break;
	case 2: 
		cout << a << " - " << b << " = " << Sub(a, b) << endl; //���������
		break; 
	case 3:	
		cout << a << " * " << b << " = " << Mult(a, b) << endl; //���������
		break;
	case 4: 
		if (b == 0)
			cout << "������� �� ����" << endl;
		else
			cout << a << " / " << b << " = " << Mult(a, b) << << endl; //�������
		break;
	}

	system("pause");
	return 0;
}