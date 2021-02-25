#include "Vector.h"
#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int menuItem;
	do
	{
		cout << endl << endl;
		cout << "Виберіть дію:" << endl << endl;
		cout << " [1] - Створення та виведення векторів" << endl;
		cout << " [2] - Додавання векторів" << endl;
		cout << " [3] - Віднімання векторів" << endl;
		cout << " [4] - Обчислення скалярного добутку векторів" << endl;
		cout << " [5] - Обчислення довжини(модуля) вектора" << endl;
		cout << " [6] - Обчислення косинуса кута між векторами" << endl;
		cout << " [0] - Вихід з програми" << endl << endl;
		cout << "Введіть значення: "; cin >> menuItem;
		cout << endl << endl;

		switch (menuItem)
		{
			case 1:
				Vector a, b;
				a.Read();
				cout << "a = ";
				a.Display();

				b.Read();
				cout << "b = ";
				b.Display();
				break;
			case 2:
				Vector c = Add(a, b);
				cout << "c = " << c.toString() << endl;
				break;
			case 3:
				Vector d = Subtract(a, b);
				cout << "d = " << d.toString() << endl;
				break;
			case 4:
				cout << "a * b = " << ScalProd(a, b) << endl;
				break;
			case 5:
				cout << "|a| = " << a.Module() << endl;
				cout << "|b| = " << b.Module() << endl;
				cout << "|c| = " << c.Module() << endl;
				cout << "|d| = " << d.Module() << endl;
				break;
			case 6:
				cout << "cosA = " << CosA(a, b) << endl;
				break;
			case 0:
				break;
			default:
				cout << "Ви ввели помилкове значення! "
					"Слід ввести число - номер вибраного пункту меню" << endl;
		}
	} while (menuItem != 0);
}