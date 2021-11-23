#include <iostream>
#include <windows.h>
using namespace std;
#define clear system("cls")


int main()
{
	setlocale(0, "");
	int i =         0;
	int dlina =     0;
	int shirina =   0;
	int figure =    0;
	char symb =   ' ';
	int size =      0;
	int type =      0;
	int sqrtype =   0;
	int sqrsize =   0;
	int recttype =  0;
	int rectsize =  0; 
	
	cout << "[+]Программа - " << "'Геометрические фигуры'" << endl;
	cout << "\n[1] Линия [2] Квадрат [3] Треугольник [4] Крестик [5] Плюс [6] Решетка [7] Прямоугольник" << endl << endl;;
	cout << "[+] Выберите фигуру: ";
	std::cin >> figure;
	clear;

	switch (figure)
	{
	case 1:
	{

		cout << "[+] Фигура - Линия" << endl;
		cout << "\n[1] Горизонтальная\n[2] Вертикальная" << endl;
		cout << "\n[+] Выберите тип: ";
		std::cin >> type;
		switch (type)
		{
		case 1:
		{
			cout << "[+] Фигура - Линия\n[+] Тип фигуры - Горизонтальная" << endl;
			cout << "\n[+] Введите размер фигуры: ";
			std::cin >> size;
			if (std::cin.fail())
			{
				cout << "такого варианта не существует" << endl;
				return 0;
			}
			cout << "[+] Выберите символ из которого будет состоять фигура: ";
			std::cin >> symb;
			while (i < size)
			{
				cout << symb;
				i++;
			}
			break;
		}
		case 2:
		{
			cout << "[+] Фигура - Линия\n[+] Тип фигуры - Вертикальная" << endl;
			cout << "\n[+] Введите размер фигуры: ";
			std::cin >> size;
			if (std::cin.fail())
			{
				cout << "такого варианта не существует" << endl;
				return 0;
			}
			cout << "\n[+] Выберите символ из которого будет состоять фигура: ";
			std::cin >> symb;
			while (i < size)
			{
				cout << symb << endl;
				i++;
			}
			break;
		}


		default:
		{
			cout << "Такого варианта не существует" << endl;
			return 0;
			break;
		}
		}
		break;
	}
	case 2:
	{

		cout << "[+] Фигура - Квадрат" << endl;
		cout << "\n[1] Заполненый\n[2] Полый" << endl;
		cout << "\n[+] Выберите тип: ";
		std::cin >> sqrtype;
		switch (sqrtype)
		{
		case 1:
		{
			clear;
			cout << "[+] Фигура - Квадрат" << endl;
			cout << "[+] Тип - Заполненый" << endl;
			cout << "\n[+] Введите размер квадрата: ";
			cin >> sqrsize;
			if (cin.fail())
			{
				cout << "Такого варианта не существует!!" << endl;
				return 0;
			}
			for (int j = 0; j < sqrsize; j++)
			{
				for (int i = 0; i < sqrsize; i++)
				{
					cout << "# ";
				}
				cout << endl;
			}
			break;
		}
		case 2:
		{
			clear;
			cout << "[+] Фигура - Квадрат" << endl;
			cout << "\n[+] Тип - Полый" << endl;
			cout << "\n[+] Введите длину квадрата: ";
			cout << "\n[+] Введите размер квадрата: ";
			std::cin >> sqrsize;
			if (std::cin.fail())
			{
				cout << "Такого варианта не существует!!" << endl;
				return 0;
			}
			for (int j = 0; j < sqrsize; j++)
			{
				for (int i = 0; i < sqrsize; i++)
				{
					(j == 0 || j == sqrsize - 1 || i == 0 || i == sqrsize - 1) ? cout << "# " : cout << "  ";
				}
				cout << endl;
			}
			break;
		}

		default:
		{
			clear;
			cout << "[+] Такого варианта не существует" << endl;
			return 0;
			break;
		}
		}
		break;
	}
	case 3:
	{
		clear;
		cout << "[+] Фигура - Треугольник" << endl;
		bool test = true;;
		while (test == true)
		{
			clear;
			cout << "\n[+] Введите размер: ";
			cin >> size;
			if (size % 2 != 0)
			{
				test = false;
			}
			else
			{
				cout << "Ввод четных чисел запрещЁн!!";
				Sleep(2000);
			}
		}
		int j = 0;
		for (int y = 0; y < size; y++)
		{

			cout << "\t";
			for (int x = 0; x < size; x++)														
			{
				if (x == size / 2 && y == 0 ||
					x == size / 2 - j && y == j ||
					x == size / 2 + j && y == j ||
					y == size / 2)
				{
					cout << "# ";
				}
				else
				{
					cout << "  ";
				}
			}
			cout << endl;
			j++;
		}
		break;
	}
	case 4:
	{
		clear;
		cout << "[+] Фигура - Крестик" << endl;
		bool test = true;;
		while (test == true)
		{
			clear;
			cout << "\n[+] Введите размер: ";
			cin >> size;
			if (size % 2 != 0)
			{
				test = false;

			}
			else
			{
				cout << "Ввод четных чисел запрещЁн!!";
				Sleep(2000);
			}
		}
		int j = 0;
		for (int y = 0; y < size; y++)
		{

			cout << "\t";
			for (int x = 0; x < size; x++)														
			{
				if (x == size - y || y == x + 1)
				{
					cout << "# ";
				}
				else
				{
					cout << "  ";
				}
			}
			cout << endl;
			j++;
		}
		break;
	}
	case 5:
	{
		clear;
		cout << "[+] Фигура - Плюс" << endl;
		bool test = true;;
		while (test == true)
		{
			clear;
			cout << "\n[+] Введите размер: ";
			cin >> size;
			if (size % 2 != 0)
			{
				test = false;

			}
			else
			{
				cout << "Ввод четных чисел запрещЁн!!";
				Sleep(2000);
			}
		}
		int j = 0;
		for (int y = 0; y < size; y++)
		{

			cout << "\t";
			for (int x = 0; x < size; x++)			
			{
				if (x%2 == 1|| y%2 == 1)
				{
					cout << "# ";
				}
				else
				{
					cout << "  ";
				}
			}
			cout << endl;
			j++;
		}
		break;
	}
	case 6:
	{
		clear;
		cout << "[+] Фигура - Решетка" << endl;
		bool test = true;;
		while (test == true)
		{
			clear;
			cout << "\n[+] Введите размер: ";
			cin >> size;
			if (size % 2 != 0)
			{
				test = false;

			}
			else
			{
				cout << "Ввод четных чисел запрещЁн!!";
				Sleep(2000);
			}
		}
		int j = 0;
		for (int y = 0; y < size; y++)
		{

			cout << "\t";
			for (int x = 0; x < size; x++)		
			{
				if (x % 2 == 1 || y % 2 == 1)
				{
					cout << "# ";
				}
				else
				{
					cout << "  ";
				}
			}
			cout << endl;
			j++;
		}
		break;
	}
	case 7:
	{
		cout << "[+] Фигура - Прямоугольник" << endl;
		cout << "\n[1] Полый\n[2] Заполненый" << endl;
		cout << "\n[+] Выберите тип: ";
		std::cin >> recttype;
		switch (recttype)
		{
		case 1:
		{
			clear;
			cout << "[+] Фигура - Прямоугольник" << endl;
			cout << "\n[+] Тип - Полый" << endl;
			cout << "\n[+] Введите длину прямоугольника: ";
			std::cin >> dlina;
			if (std::cin.fail())
			{
				cout << "Такого варианта не существует!!" << endl;
				return 0;
			}
			cout << "\n[+] Введите ширину прямоугольника: ";
			std::cin >> shirina;
			if (std::cin.fail())
			{
				cout << "Такого варианта не существует!!" << endl;
				return 0;
			}
			if (dlina == shirina)
			{
				cout << "\n[-] Данные значения не допустины для фигуры - \"Прямоугольник\"" << endl;
				return 0;
			}
			for (int j = 0; j < dlina; j++)
			{
				for (int i = 0; i < shirina; i++)
				{
					(j == 0 || j == dlina - 1 || i == 0 || i == shirina - 1) ? cout << "# " : cout << "  ";
				}
				cout << endl;
			}			
			break;
		}
		case 2:
		{
			clear;
			cout << "[+] Фигура - Прямоугольник" << endl;
			cout << "\n[+] Тип - Заполненый" << endl;
			cout << "\n[+] Введите длину прямоугольника: ";
			std::cin >> dlina;
			if (std::cin.fail())
			{
				cout << "Такого варианта не существует!!" << endl;
				return 0;
			}
			cout << "\n[+] Введите ширину прямоугольника: ";
			std::cin >> shirina;
			if (std::cin.fail())
			{
				cout << "Такого варианта не существует!!" << endl;
				return 0;
			}
			if (dlina == shirina)
			{
				cout << "\n[-] Данные значения не допустины для фигуры - \"Прямоугольник\"" << endl;
				return 0;
			}
			for (int j = 0; j < dlina; j++)
			{
				for (int i = 0; i < shirina; i++)
				{				
						cout << "# ";				
				}
				cout << endl;
			}
			break;
		}
		default:
		{
			clear;
			cout << "[+] Такого варианта не существует" << endl;
			return 0;
			break;
		}
		}
		break;
	}
	default:
	{
		cout << "[+] Такого варианта не существует" << endl;
		return 0;
		break;
	}
	}
	
	
	
	int _; std::cin >> _;
	return 0;
}
