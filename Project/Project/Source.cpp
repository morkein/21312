//0.1


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
	return 0;
}