#include <iostream>
#include <windows.h>
using namespace std;
#define clear system("cls")

bool turnX = true;
int area = 0;
string nolik = "O";
string krestik = "X";
string place = "#";

void menu();
void game();
void rules()
{
	clear;
	char o;
	cout << "[Правила]" << endl << endl;
	cout << "Правила игры. Выигранная партия в крестики-нолики. Игроки по очереди ставят на свободные клетки поля 3×3 знаки (один всегда крестики, другой всегда нолики). Первый, выстроивший в ряд 3 своих фигуры по вертикали, горизонтали или диагонали, выигрывает. Первый ход делает игрок, ставящий крестики. Обычно по завершении партии выигравшая сторона зачёркивает чертой свои три знака (нолика или крестика), составляющих сплошной ряд." << endl;
	cout << "\n[+] Назад в меню" << endl;
	cout << "[+] Выбор: ";
	cin >> o;
	menu();
}
void colorKrestik()
{
	clear;
	int choice = 0;
	cout << "[Настройка] Выбор цвета крестика" << endl;
	cout << "[1] \x1b[91mX\x1b[0m" << endl;
	cout << "[2] \x1b[32mX\x1b[0m" << endl;
	cout << "[3] \x1b[33mX\x1b[0m" << endl;
	cout << "[4] \x1b[34mX\x1b[0m" << endl;
	cout << "[5] \x1b[35mX\x1b[0m" << endl;
	cout << "[6] \x1b[36mX\x1b[0m" << endl;
	cout << "Выбор: ";
	cin >> choice;
	switch (choice)
	{
	case 1: {
		krestik = "\x1b[91mX\x1b[0m";
		break;
	}
	case 2: {
		krestik = "\x1b[32mX\x1b[0m";
		break;
	}
	case 3: {
		krestik = "\x1b[33mX\x1b[0m";
		break;
	}
	case 4: {
		krestik = "\x1b[34mX\x1b[0m";
		break;
	}
	case 5: {
		krestik = "\x1b[35mX\x1b[0m";
		break;
	}
	case 6: {
		krestik = "\x1b[36mX\x1b[0m";
		break;
	}
	default: {
		cout << "[ERROR]" << endl;
		break;
	}
	}

}
void colorNolik()
{
	clear;
	int choice = 0;
	cout << "[Настройки] Выбор цвета крестика" << endl;
	cout << "[1] \x1b[91mO\x1b[0m" << endl;
	cout << "[2] \x1b[32mO\x1b[0m" << endl;
	cout << "[3] \x1b[33mO\x1b[0m" << endl;
	cout << "[4] \x1b[34mO\x1b[0m" << endl;
	cout << "[5] \x1b[35mO\x1b[0m" << endl;
	cout << "[6] \x1b[36mO\x1b[0m" << endl;
	cout << "Выбор: ";
	cin >> choice;
	switch (choice)
	{
	case 1: {
		nolik = "\x1b[91mO\x1b[0m";
		break;
	}
	case 2: {
		nolik = "\x1b[32mO\x1b[0m";
		break;
	}
	case 3: {
		nolik = "\x1b[33mO\x1b[0m";
		break;
	}
	case 4: {
		nolik = "\x1b[34mO\x1b[0m";
		break;
	}
	case 5: {
		nolik = "\x1b[35mO\x1b[0m";
		break;
	}
	case 6: {
		nolik = "\x1b[36mO\x1b[0m";
		break;
	}
	default: {
		cout << "[ERROR]" << endl;
		break;
	}
	}

}
void colorPlace()
{
	clear;
	int choice = 0;
	cout << "[Настройки] Выбор цвета крестика" << endl;
	cout << "[1] \x1b[91m#\x1b[0m" << endl; //red
	cout << "[2] \x1b[92m#\x1b[0m" << endl; //green
	cout << "[3] \x1b[93m#\x1b[0m" << endl; //yellow
	cout << "[4] \x1b[94m#\x1b[0m" << endl; //blue
	cout << "[5] \x1b[95m#\x1b[0m" << endl; //purpule
	cout << "[6] \x1b[96m#\x1b[0m" << endl; //cyan
	cout << "Выбор: ";
	cin >> choice;
	switch (choice)
	{
	case 1: {
		place = "\x1b[91m#\x1b[0m";
		break;
	}
	case 2: {
		place = "\x1b[92m#\x1b[0m";
		break;
	}
	case 3: {
		place = "\x1b[93m#\x1b[0m";
		break;
	}
	case 4: {
		place = "\x1b[94m#\x1b[0m";
		break;
	}
	case 5: {
		place = "\x1b[95m#\x1b[0m";
		break;

	}case 6: {
		place = "\x1b[96m#\x1b[0m";
		break;
	}
	default: {
		cout << "[ERROR]" << endl;
		break;
	}
	}

}
void boxSize()
{
	clear;
	int size = 0;
	cout << "[Настройки] Размер поля\n" << endl;
	cout << "[1] 3x3" << endl;
	cout << "[2] 4x4" << endl;
	cout << "[3] 5x5" << endl;
	cout << "Выбор: ";
	cin >> size;
	switch (size)
	{
	case 1:
	{
		area = 0;
		break;
	}
	case 2:
	{
		area = 1;
		break;
	}
	case 3:
	{
		area = 2;
		break;
	}

	default:
		break;
	}
	
}
void settings()
{
	clear;
	int setting = 0;
	cout << "[Настройки]" << endl;
	cout << "[1] Цвет поля" << endl;
	cout << "[2] Цвет крестика" << endl;
	cout << "[3] Цвет нолика" << endl;
	cout << "[4] Размер поля" << endl;
	cout << "[5] Выход в меню" << endl;
	cout << "\n[+] Выбор: ";
	cin >> setting;
	switch (setting)
	{
	case 1: {
		colorPlace();
		settings();
		break;
	}
	case 2: {
		colorKrestik();
		settings();
		break;
	}
	case 3: {
		colorNolik();
		settings();
		break;
	}
	case 4: {
		boxSize();
		settings();
		break;
	}
	case 5: {
		menu();
		break;
	}
	default: {
		cout << "[-] Такого варианта не существует!!" << endl;
		settings();
		break;
	}
	}
}
void menu()
{
	clear;
	int menus;
	cout << "Игра - [Крестики-Нолики]" << endl << endl;
	cout << "[1] Играть \n[2] Правила \n[3] Настройки \n[4] Выйти" << endl;
	cout << "Выбор: ";
	cin >> menus;
	switch (menus)
	{
	case 1: {
		game();
		break;
	}
	case 2: {
		rules();
		break;
	}
	case 3: {
		settings();
	}
	case 4:
		exit(0);
	}
}

void game()
{
	setlocale(0, "");
	bool win = true;

	int turn = 0;
	if (area == 0)
	{ 
		const int row = 3;
		const int columns = 3;
		int map[row][columns]
		{
			{0,0,0},
			{0,0,0},
			{0,0,0}
		};

		clear;
		while (win == true)
		{
			cout << "[Игра] Крестики-Нолики";
			cout << "\n\n";
			for (int i = 0; i < row; i++)
			{
				cout << "\t\t";
				for (int j = 0; j < columns; j++)
				{
					if (map[i][j] == 0)
					{
						cout << place << "    ";
					}
					else if (map[i][j] == 1)
					{
						cout << krestik << "    ";
					}
					else if (map[i][j] == 2)
					{
						cout << nolik << "    ";
					}
				}
				cout << "\n\n";
			}
			if (turnX == true)
			{
				cout << "[+] Ход Крестика: ";
				turnX = false;
			}
			else
			{
				cout << "[+] Ход Нолика: ";
				turnX = true;
			}
			cin >> turn;

			switch (turn)
			{
			case 1:
				if (map[0][0] != 1 && map[0][0] != 2)
					!turnX ? map[0][0] = 1 : map[0][0] = 2;
				else
					turnX = !turnX;
				break;
			case 2:
				if (map[0][1] != 1 && map[0][1] != 2)
					!turnX ? map[0][1] = 1 : map[0][1] = 2;
				else
					turnX = !turnX;
				break;
			case 3:
				if (map[0][2] != 1 && map[0][2] != 2)
					!turnX ? map[0][2] = 1 : map[0][2] = 2;
				else
					turnX = !turnX;
				break;
			case 4:
				if (map[1][0] != 1 && map[1][0] != 2)
					!turnX ? map[1][0] = 1 : map[1][0] = 2;
				else
					turnX = !turnX;
				break;
			case 5:
				if (map[1][1] != 1 && map[1][1] != 2)
					!turnX ? map[1][1] = 1 : map[1][1] = 2;
				else
					turnX = !turnX;
				break;
			case 6:
				if (map[1][2] != 1 && map[1][2] != 2)
					!turnX ? map[1][2] = 1 : map[1][2] = 2;
				else
					turnX = !turnX;
				break;
			case 7:
				if (map[2][0] != 1 && map[2][0] != 2)
					!turnX ? map[2][0] = 1 : map[2][0] = 2;
				else
					turnX = !turnX;
				break;
			case 8:
				if (map[2][1] != 1 && map[2][1] != 2)
					!turnX ? map[2][1] = 1 : map[2][1] = 2;
				else
					turnX = !turnX;
				break;
			case 9:
				if (map[2][2] != 1 && map[2][2] != 2)
					!turnX ? map[2][2] = 1 : map[2][2] = 2;
				else
					turnX = !turnX;
				break;
			}
			system("cls");
			if (map[0][0] == 1 && map[0][1] == 1 && map[0][2] == 1 || map[0][0] == 2 && map[0][1] == 2 && map[0][2] == 2 ||
				map[1][0] == 1 && map[1][1] == 1 && map[1][2] == 1 || map[1][0] == 2 && map[1][1] == 2 && map[1][2] == 2 ||
				map[2][0] == 1 && map[2][1] == 1 && map[2][2] == 1 || map[2][0] == 2 && map[2][1] == 2 && map[2][2] == 2 ||
				map[0][1] == 1 && map[1][1] == 1 && map[2][1] == 1 || map[0][1] == 2 && map[1][1] == 2 && map[2][1] == 2 ||
				map[0][0] == 1 && map[1][0] == 1 && map[2][0] == 1 || map[0][0] == 2 && map[1][0] == 2 && map[2][0] == 2 ||
				map[0][2] == 1 && map[1][2] == 1 && map[2][2] == 1 || map[0][2] == 2 && map[1][2] == 2 && map[2][2] == 2 ||
				map[0][2] == 1 && map[1][1] == 1 && map[2][0] == 1 || map[0][2] == 2 && map[1][1] == 2 && map[2][0] == 2 ||
				map[0][0] == 1 && map[1][1] == 1 && map[2][2] == 1 || map[0][0] == 2 && map[1][1] == 2 && map[2][2] == 2)
			{
				if (!turnX == true) {

					cout << "\x1b[92mПобеда крестиков!!!\x1b[0m" << endl;
					win = false;
				}
				else {
					cout << "\x1b[92mПобеда ноликов!!!\x1b[0m" << endl;
					win = false;
				}
			}
		}
		Sleep(3000);
		exit(0);
	}
	else if (area == 1)
	{
		const int row = 4;
		const int columns = 4;
		int map[row][columns]
		{
			{0,0,0,0},
			{0,0,0,0},
			{0,0,0,0},
			{0,0,0,0}
		};

		clear;
		while (win == true)
		{
			cout << "[Игра] Крестики-Нолики";
			cout << "\n\n";
			for (int i = 0; i < row; i++)
			{
				cout << "\t\t";
				for (int j = 0; j < columns; j++)
				{
					if (map[i][j] == 0)
					{
						cout << place << "    ";
					}
					else if (map[i][j] == 1)
					{
						cout << krestik << "    ";
					}
					else if (map[i][j] == 2)
					{
						cout << nolik << "    ";
					}
				}
				cout << "\n\n";
			}
			if (turnX == true)
			{
				cout << "[+] Ход Крестика: ";
				turnX = false;
			}
			else
			{
				cout << "[+] Ход Нолика: ";
				turnX = true;
			}
			cin >> turn;

			switch (turn)
			{
			case 1:
				if (map[0][0] != 1 && map[0][0] != 2)
					!turnX ? map[0][0] = 1 : map[0][0] = 2;
				else
					turnX = !turnX;
				break;
			case 2:
				if (map[0][1] != 1 && map[0][1] != 2)
					!turnX ? map[0][1] = 1 : map[0][1] = 2;
				else
					turnX = !turnX;
				break;
			case 3:
				if (map[0][2] != 1 && map[0][2] != 2)
					!turnX ? map[0][2] = 1 : map[0][2] = 2;
				else
					turnX = !turnX;
				break;
			case 4:
				if (map[0][3] != 1 && map[0][3] != 2)
					!turnX ? map[0][3] = 1 : map[0][3] = 2;
				else
					turnX = !turnX;
				break;
			case 5:
				if (map[1][0] != 1 && map[1][0] != 2)
					!turnX ? map[1][0] = 1 : map[1][0] = 2;
				else
					turnX = !turnX;
				break;
			case 6:
				if (map[1][1] != 1 && map[1][1] != 2)
					!turnX ? map[1][1] = 1 : map[1][1] = 2;
				else
					turnX = !turnX;
				break;
			case 7:
				if (map[1][2] != 1 && map[1][2] != 2)
					!turnX ? map[1][2] = 1 : map[1][2] = 2;
				else
					turnX = !turnX;
				break;
			case 8:
				if (map[1][3] != 1 && map[1][3] != 2)
					!turnX ? map[1][3] = 1 : map[1][3] = 2;
				else
					turnX = !turnX;
				break;
			case 9:
				if (map[2][0] != 1 && map[2][0] != 2)
					!turnX ? map[2][0] = 1 : map[2][0] = 2;
				else
					turnX = !turnX;
				break;
			case 10:
				if (map[2][1] != 1 && map[2][1] != 2)
					!turnX ? map[2][1] = 1 : map[2][1] = 2;
				else
					turnX = !turnX;
				break;
			case 11:
				if (map[2][2] != 1 && map[2][2] != 2)
					!turnX ? map[2][2] = 1 : map[2][2] = 2;
				else
					turnX = !turnX;
				break;
			case 12:
				if (map[2][3] != 1 && map[2][3] != 2)
					!turnX ? map[2][3] = 1 : map[2][3] = 2;
				else
					turnX = !turnX;
				break;
			case 13:
				if (map[3][0] != 1 && map[3][0] != 2)
					!turnX ? map[3][0] = 1 : map[3][0] = 2;
				else
					turnX = !turnX;
				break;
			case 14:
				if (map[3][1] != 1 && map[3][1] != 2)
					!turnX ? map[3][1] = 1 : map[3][1] = 2;
				else
					turnX = !turnX;
				break;
			case 15:
				if (map[3][2] != 1 && map[3][2] != 2)
					!turnX ? map[3][2] = 1 : map[3][2] = 2;
				else
					turnX = !turnX;
				break;
			case 16:
				if (map[3][3] != 1 && map[3][3] != 2)
					!turnX ? map[3][3] = 1 : map[3][3] = 2;
				else
					turnX = !turnX;
				break;
			}
			system("cls");
			if (
				//Горизонталь
				map[0][0] == 1 && map[0][1] == 1 && map[0][2] == 1 && map[0][3] == 1 ||
				map[1][0] == 1 && map[1][1] == 1 && map[1][2] == 1 && map[1][3] == 1 ||
				map[2][0] == 1 && map[2][1] == 1 && map[2][2] == 1 && map[2][3] == 1 ||
				map[3][0] == 1 && map[3][1] == 1 && map[3][2] == 1 && map[3][3] == 1 ||
				//Вертикаль
				map[0][0] == 1 && map[1][0] == 1 && map[2][0] == 1 && map[3][0] == 1 ||
				map[0][1] == 1 && map[1][1] == 1 && map[2][1] == 1 && map[3][1] == 1 ||
				map[0][2] == 1 && map[1][2] == 1 && map[2][2] == 1 && map[3][2] == 1 ||
				map[0][3] == 1 && map[1][3] == 1 && map[2][3] == 1 && map[3][3] == 1 ||
				//Диагональ
				map[0][0] == 1 && map[1][1] == 1 && map[2][2] == 1 && map[3][3] == 1 ||
				map[0][3] == 1 && map[1][2] == 1 && map[1][1] == 1 && map[1][0] == 1
				)
			{
				if (!turnX == true) {

					cout << "\x1b[92mПобеда крестиков!!!\x1b[0m" << endl;
					win = false;
				}
				else {
					cout << "\x1b[92mПобеда ноликов!!!\x1b[0m" << endl;
					win = false;
				}
			}
			else if (
				//Горизонталь
				map[0][0] == 2 && map[0][1] == 2 && map[0][2] == 2 && map[0][3] == 2 ||
				map[1][0] == 2 && map[1][1] == 2 && map[1][2] == 2 && map[1][3] == 2 ||
				map[2][0] == 2 && map[2][1] == 2 && map[2][2] == 2 && map[2][3] == 2 ||
				map[3][0] == 2 && map[3][1] == 2 && map[3][2] == 2 && map[3][3] == 2 ||
				//Вертикаль
				map[0][0] == 2 && map[1][0] == 2 && map[2][0] == 2 && map[3][0] == 2 ||
				map[0][1] == 2 && map[1][1] == 2 && map[2][1] == 2 && map[3][1] == 2 ||
				map[0][2] == 2 && map[1][2] == 2 && map[2][2] == 2 && map[3][2] == 2 ||
				map[0][3] == 2 && map[1][3] == 2 && map[2][3] == 2 && map[3][3] == 2 ||
				//Диагональ
				map[0][0] == 2 && map[1][1] == 2 && map[2][2] == 2 && map[3][3] == 2 ||
				map[0][3] == 2 && map[1][2] == 2 && map[1][1] == 2 && map[1][0] == 2
				)
			{
				if (!turnX == true) {

					cout << "\x1b[92mПобеда крестиков!!!\x1b[0m" << endl;
					win = false;
				}
				else {
					cout << "\x1b[92mПобеда ноликов!!!\x1b[0m" << endl;
					win = false;
				}
			}
		}
		Sleep(3000);
		exit(0);
	}	
	else if (area == 2)
	{
		const int row = 5;
		const int columns = 5;
		int map[row][columns]
		{
			{0,0,0,0,0},
			{0,0,0,0,0},
			{0,0,0,0,0},
			{0,0,0,0,0},
			{0,0,0,0,0}
		};
		clear;
		while (win == true)
		{
			cout << "[Игра] Крестики-Нолики";
			cout << "\n\n";
			for (int i = 0; i < row; i++)
			{
				cout << "\t\t";
				for (int j = 0; j < columns; j++)
				{
					if (map[i][j] == 0)
					{
						cout << place << "    ";
					}
					else if (map[i][j] == 1)
					{
						cout << krestik << "    ";
					}
					else if (map[i][j] == 2)
					{
						cout << nolik << "    ";
					}
				}
				cout << "\n\n";
			}
			if (turnX == true)
			{
				cout << "[+] Ход Крестика: ";
				turnX = false;
			}
			else
			{
				cout << "[+] Ход Нолика: ";
				turnX = true;
			}
			cin >> turn;

			switch (turn)
			{
			case 1:
				if (map[0][0] != 1 && map[0][0] != 2)
					!turnX ? map[0][0] = 1 : map[0][0] = 2;
				else
					turnX = !turnX;
				break;
			case 2:
				if (map[0][1] != 1 && map[0][1] != 2)
					!turnX ? map[0][1] = 1 : map[0][1] = 2;
				else
					turnX = !turnX;
				break;
			case 3:
				if (map[0][2] != 1 && map[0][2] != 2)
					!turnX ? map[0][2] = 1 : map[0][2] = 2;
				else
					turnX = !turnX;
				break;
			case 4:
				if (map[0][3] != 1 && map[0][3] != 2)
					!turnX ? map[0][3] = 1 : map[0][3] = 2;
				else
					turnX = !turnX;
				break;
			case 5:
				if (map[0][4] != 1 && map[0][4] != 2)
					!turnX ? map[0][4] = 1 : map[0][4] = 2;
				else
					turnX = !turnX;
				break;
			case 6:
				if (map[1][0] != 1 && map[1][0] != 2)
					!turnX ? map[1][0] = 1 : map[1][0] = 2;
				else
					turnX = !turnX;
				break;
			case 7:
				if (map[1][1] != 1 && map[1][1] != 2)
					!turnX ? map[1][1] = 1 : map[1][1] = 2;
				else
					turnX = !turnX;
				break;
			case 8:
				if (map[1][2] != 1 && map[1][2] != 2)
					!turnX ? map[1][2] = 1 : map[1][2] = 2;
				else
					turnX = !turnX;
				break;
			case 9:
				if (map[1][3] != 1 && map[1][3] != 2)
					!turnX ? map[1][3] = 1 : map[1][3] = 2;
				else
					turnX = !turnX;
				break;
			case 10:
				if (map[1][4] != 1 && map[1][4] != 2)
					!turnX ? map[1][4] = 1 : map[1][4] = 2;
				else
					turnX = !turnX;
				break;
				case 11:
				if (map[2][0] != 1 && map[2][0] != 2)
					!turnX ? map[2][0] = 1 : map[2][0] = 2;
				else
					turnX = !turnX;
				break;
				case 12:
				if (map[2][1] != 1 && map[2][1] != 2)
					!turnX ? map[2][1] = 1 : map[2][1] = 2;
				else
					turnX = !turnX;
				break;
				case 13:
				if (map[2][2] != 1 && map[2][2] != 2)
					!turnX ? map[2][2] = 1 : map[2][2] = 2;
				else
					turnX = !turnX;
				break;
				case 14:
				if (map[2][3] != 1 && map[2][3] != 2)
					!turnX ? map[2][3] = 1 : map[2][3] = 2;
				else
					turnX = !turnX;
				break;
				case 15:
				if (map[2][4] != 1 && map[2][4] != 2)
					!turnX ? map[2][4] = 1 : map[2][4] = 2;
				else
					turnX = !turnX;
				break;
				case 16:
				if (map[3][0] != 1 && map[3][0] != 2)
					!turnX ? map[3][0] = 1 : map[3][0] = 2;
				else
					turnX = !turnX;
				break;
				case 17:
				if (map[3][1] != 1 && map[3][1] != 2)
					!turnX ? map[3][1] = 1 : map[3][1] = 2;
				else
					turnX = !turnX;
				break;
				case 18:
				if (map[3][2] != 1 && map[3][2] != 2)
					!turnX ? map[3][2] = 1 : map[3][2] = 2;
				else
					turnX = !turnX;
				break;
				case 19:
				if (map[3][3] != 1 && map[3][3] != 2)
					!turnX ? map[3][3] = 1 : map[3][3] = 2;
				else
					turnX = !turnX;
				break;
				case 20:
				if (map[3][4] != 1 && map[3][4] != 2)
					!turnX ? map[3][4] = 1 : map[3][4] = 2;
				else
					turnX = !turnX;
				break;
				case 21:
				if (map[4][0] != 1 && map[4][0] != 2)
					!turnX ? map[4][0] = 1 : map[4][0] = 2;
				else
					turnX = !turnX;
				break;
				case 22:
				if (map[4][1] != 1 && map[4][1] != 2)
					!turnX ? map[4][1] = 1 : map[4][1] = 2;
				else
					turnX = !turnX;
				break;
				case 23:
				if (map[4][2] != 1 && map[4][2] != 2)
					!turnX ? map[4][2] = 1 : map[4][2] = 2;
				else
					turnX = !turnX;
				break;
				case 24:
				if (map[4][3] != 1 && map[4][3] != 2)
					!turnX ? map[4][3] = 1 : map[4][3] = 2;
				else
					turnX = !turnX;
				break;
				case 25:
				if (map[4][4] != 1 && map[4][4] != 2)
					!turnX ? map[4][4] = 1 : map[4][4] = 2;
				else
					turnX = !turnX;
				break;
			}
			system("cls");
			if (
				//Горизонталь
				map[0][0] == 1 && map[0][1] == 1 && map[0][2] == 1 && map[0][3] == 1 && map[0][4] == 1 ||
				map[1][0] == 1 && map[1][1] == 1 && map[1][2] == 1 && map[1][3] == 1 && map[1][4] == 1 ||
				map[2][0] == 1 && map[2][1] == 1 && map[2][2] == 1 && map[2][3] == 1 && map[2][4] == 1 ||
				map[3][0] == 1 && map[3][1] == 1 && map[3][2] == 1 && map[3][3] == 1 && map[3][4] == 1 ||
				map[4][0] == 1 && map[4][1] == 1 && map[4][2] == 1 && map[4][3] == 1 && map[4][4] == 1 ||
				//Вертикаль
				map[0][0] == 1 && map[1][0] == 1 && map[2][0] == 1 && map[3][0] == 1 && map[4][0] == 1 ||
				map[0][1] == 1 && map[1][1] == 1 && map[2][1] == 1 && map[3][1] == 1 && map[4][1] == 1 ||
				map[0][2] == 1 && map[1][2] == 1 && map[2][2] == 1 && map[3][2] == 1 && map[4][2] == 1 ||
				map[0][3] == 1 && map[1][3] == 1 && map[2][3] == 1 && map[3][3] == 1 && map[4][3] == 1 ||
				map[0][4] == 1 && map[1][4] == 1 && map[2][4] == 1 && map[3][4] == 1 && map[4][4] == 1 ||
				//Диагональ
				map[0][0] == 1 && map[1][1] == 1 && map[2][2] == 1 && map[3][3] == 1 && map[4][4] == 1 ||
				map[0][4] == 1 && map[1][3] == 1 && map[2][2] == 1 && map[3][1] == 1 && map[4][0] == 1
				)
			{
				if (!turnX == true) {

					cout << "\x1b[92mПобеда крестиков!!!\x1b[0m" << endl;
					win = false;
				}
				else {
					cout << "\x1b[92mПобеда ноликов!!!\x1b[0m" << endl;
					win = false;
				}
			}
			else if 
				(
					//Горизонталь
					map[0][0] == 2 && map[0][1] == 2 && map[0][2] == 2 && map[0][3] == 2 && map[0][4] == 2 ||
					map[1][0] == 2 && map[1][1] == 2 && map[1][2] == 2 && map[1][3] == 2 && map[1][4] == 2 ||
					map[2][0] == 2 && map[2][1] == 2 && map[2][2] == 2 && map[2][3] == 2 && map[2][4] == 2 ||
					map[3][0] == 2 && map[3][1] == 2 && map[3][2] == 2 && map[3][3] == 2 && map[3][4] == 2 ||
					map[4][0] == 2 && map[4][1] == 2 && map[4][2] == 2 && map[4][3] == 2 && map[4][4] == 2 ||
					//Вертикаль
					map[0][0] == 2 && map[1][0] == 2 && map[2][0] == 2 && map[3][0] == 2 && map[4][0] == 2 ||
					map[0][1] == 2 && map[1][1] == 2 && map[2][1] == 2 && map[3][1] == 2 && map[4][1] == 2 ||
					map[0][2] == 2 && map[1][2] == 2 && map[2][2] == 2 && map[3][2] == 2 && map[4][2] == 2 ||
					map[0][3] == 2 && map[1][3] == 2 && map[2][3] == 2 && map[3][3] == 2 && map[4][3] == 2 ||
					map[0][4] == 2 && map[1][4] == 2 && map[2][4] == 2 && map[3][4] == 2 && map[4][4] == 2 ||
					//Диагональ
					map[0][0] == 2 && map[1][1] == 2 && map[2][2] == 2 && map[3][3] == 2 && map[4][4] == 2 ||
					map[0][4] == 2 && map[1][3] == 2 && map[2][2] == 2 && map[3][1] == 2 && map[4][0] == 2
				)
			{
				if (!turnX == true) {

					cout << "\x1b[92mПобеда крестиков!!!\x1b[0m" << endl;
					win = false;
				}
				else {
					cout << "\x1b[92mПобеда ноликов!!!\x1b[0m" << endl;
					win = false;
				}
			}
		}
		Sleep(3000);
		exit(0);
	}
	}



int main()
{
	setlocale(0, "");
	menu();

	
	int _; cin >> _;
	return 0;
}
