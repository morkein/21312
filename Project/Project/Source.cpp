//ready to release 1.0


#include "feature1.h"
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
		cout << "Функция в разработке" << endl; 
		break; //Вычитание
	case 3:	
		cout << "Функция в разработке" << endl; //Умножение
		break;
	case 4: 
		cout << "Функция в разработке" << endl; //Деление
		break;
	}

	system("pause");
	return 0;
}