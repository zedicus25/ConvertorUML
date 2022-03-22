#include <iostream>
#include "EnergyConvertor.h"
#include "SpeedConvertor.h"
using std::cout;
using std::cin;
int main()
{
	setlocale(LC_ALL, "Russian");
	EnergyConvertor* enegryConvertor = new EnergyConvertor;
	SpeedConvertor* speedConvertor = new SpeedConvertor;
    int userInput = -1;
	do
	{
		system("cls");
		cout << "1 - Ватты\n";
		cout << "2 - Джоули\n";
		cout << "3 - Скорость\n";
		cout << "0 - Выход\n";
		cin >> userInput;
		switch (userInput)
		{
		case 1:
		{
			int usInp;
			do
			{
				system("cls");
				cout << "1 - Ватты в килловатты\n";
				cout << "2 - Килловатты в мегаватты\n";
				cout << "3 - Килловатты в ватты\n";
				cout << "0 - Выход из подменю\n";
				cin >> usInp;
				switch (usInp)
				{
				case 1:
				{
					float input;
					do
					{
						cout << "Введите значение\n";
						cin >> input;
					} while (input < 0);
					cout << "Результат " << enegryConvertor->lowToHigh(input) << " килловатт\n";
					system("pause");
					break;
				}
				case 2:
				{
					float input;
					do
					{
						cout << "Введите значение\n";
						cin >> input;
					} while (input < 0);
					cout << "Результат " << enegryConvertor->lowToHigh(input) << " мегаватт\n";
					system("pause");
					break;
				}
				case 3:
				{
					float input;
					do
					{
						cout << "Введите значение\n";
						cin >> input;
					} while (input < 0);
					cout << "Результат " << enegryConvertor->highToLow(input) << " ватт\n";
					system("pause");
					break;
				}
				case 0:
					break;
				default:
					cout << "Неверный ввод!\n";
					break;
				}
			} while (usInp != 0);
			break;
		}
		case 2:
		{
			int usInp;
			do
			{
				system("cls");
				cout << "1 - Джоули в киллоджоули\n";
				cout << "2 - Киллоджоули в мегаджоули\n";
				cout << "3 - Киллоджоули в джоули\n";
				cout << "0 - Выход из подменю\n";
				cin >> usInp;
				switch (usInp)
				{
				case 1:
				{
					float input;
					do
					{
						cout << "Введите значение\n";
						cin >> input;
					} while (input < 0);
					cout << "Результат " << enegryConvertor->lowToHigh(input) << " киллоджоулей\n";
					system("pause");
					break;
				}
				case 2:
				{
					float input;
					do
					{
						cout << "Введите значение\n";
						cin >> input;
					} while (input < 0);
					cout << "Результат " << enegryConvertor->lowToHigh(input) << " мегаджоулей\n";
					system("pause");
					break;
				}
				case 3:
				{
					float input;
					do
					{
						cout << "Введите значение\n";
						cin >> input;
					} while (input < 0);
					cout << "Результат " << enegryConvertor->highToLow(input) << " джоулей\n";
					system("pause");
					break;
				}
				case 0:
					break;
				default:
					cout << "Неверный ввод!\n";
					break;
				}
			} while (usInp != 0);
			break;
		}
		case 3:
		{
			int usInp;
			do
			{
				system("cls");
				cout << "1 - км\\ч в м\\с\n";
				cout << "2 - м\\с в км\\ч\n";
				cout << "0 - Выход из подменю\n";
				cin >> usInp;
				switch (usInp)
				{
				case 1:
				{
					float input;
					do
					{
						cout << "Введите значение\n";
						cin >> input;
					} while (input < 0);
					cout << "Результат " << speedConvertor->lowToHigh(input) << " м\\с\n";
					system("pause");
					break;
				}
				case 2:
				{
					float input;
					do
					{
						cout << "Введите значение\n";
						cin >> input;
					} while (input < 0);
					cout << "Результат " << speedConvertor->highToLow(input) << " км\\ч\n";
					system("pause");
					break;
				}
				case 0:
					break;
				default:
					cout << "Неверный ввод!\n";
					break;
				}
			} while (usInp != 0);
			break;
		}
		case 0:
			break;
		default:
			cout << "Неверный ввод!\n";
			break;
		}
	} while (userInput != 0);
}