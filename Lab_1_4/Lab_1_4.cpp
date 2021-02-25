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
		cout << "������� ��:" << endl << endl;
		cout << " [1] - ��������� �� ��������� �������" << endl;
		cout << " [2] - ��������� �������" << endl;
		cout << " [3] - ³������� �������" << endl;
		cout << " [4] - ���������� ���������� ������� �������" << endl;
		cout << " [5] - ���������� �������(������) �������" << endl;
		cout << " [6] - ���������� �������� ���� �� ���������" << endl;
		cout << " [0] - ����� � ��������" << endl << endl;
		cout << "������ ��������: "; cin >> menuItem;
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
				cout << "�� ����� ��������� ��������! "
					"��� ������ ����� - ����� ��������� ������ ����" << endl;
		}
	} while (menuItem != 0);
}