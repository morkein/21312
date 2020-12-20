

#include "feature1.h"
#include "feature2.h"
#include "feature3.h"
#include <iostream>
using namespace std;

int main()
{
	double a, b, result;	//параметры функции
	int choice;
	setlocale(LC_ALL, "rus");

	//ввод параметров
	cout << "Введите значение A" << endl;
	cin >> a;
	cout << "Введите значение B" << endl;
	cin >> b;

	//ввод операции
	cout << "Введите номер проводимой операции:" << endl;
	cout << "1. Сложение" << endl << "2. Вычитание" << endl;
	cout << "3. Умножение" << endl << "4. Деление" << endl;
	cin >> choice;

	//основная часть
	switch (choice)
	{
	case 1:
		cout << a << " + " << b << " = " << Sum(a, b) << endl;  //Сложение
		break;
	case 2: 
		cout << a << " - " << b << " = " << Sub(a, b) << endl; //Вычитание
		break; 
	case 3:	
		cout << a << " * " << b << " = " << Mult(a, b) << endl; //Умножение
		break;
	case 4: 
		if (b == 0)
			cout << "Деление на ноль" << endl;
		else
			cout << a << " / " << b << " = " << Mult(a, b) << << endl; //Деление
		break;
	}

	system("pause");
	return 0;
}