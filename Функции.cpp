#include <iostream>
#include <windows.h>
#define del system("cls")
#define timer Sleep(3000)
#define def system("color 07")

using namespace std;



void clear();
void colorBackground();
void colorText();
void sizeOfInt();
void sizeOfChar();
void sizeOfDouble();
void sizeOfFloat();
void sizeOfBool();
void hello();
void square();

int main()
{
	setlocale(0, "");
	int func;
	del;
	def;
	cout << "[1] Очищение консоли\n"
		<< "[2] Изменение цвета фона консоли\n"
		<< "[3] Изменение цвета текста консоли\n"
		<< "[4] Вывод размера типа данных INT\n"
		<< "[5] Вывод размера типа данных CHAR\n"
		<< "[6] Вывод размера типа данных DOUBLE\n"
		<< "[7] Вывод размера типа данных FLOAT\n"
		<< "[8] Вывод размера типа данных Bool\n"
		<< "[9] Приветствие\n"
		<< "[10] Квадрат 5х5" << endl;
	cout << "\nВыбор функции:";
	cin >> func;
	if (func == 1) {
		clear();
		timer;
		main();
	}
	else if (func == 2) {
		del;
		colorBackground();
		timer;
		main();
	}
	else if (func == 3) {
		del;
		colorText();
		timer;
		main();
	}
	else if (func == 4) {
		del;
		sizeOfInt();
		timer;
		main();
	}

	else if (func == 5) {
		del;
		sizeOfChar();
		timer;
		main();
	}

	else if (func == 6) {
		del;
		sizeOfDouble();
		timer;
		main();
	}

	else if (func == 7) {
		del;
		sizeOfFloat();
		timer;
		main();
	}

	else if (func == 8) {
		del;
		sizeOfBool();
		timer;
		main();
	}

	else if (func == 9) {
		del;
		hello();
		timer;
		main();
	}

	else if (func == 10) {
		del;
		square();
		timer;
		main();
	}
	else {
		del;
		cout << "Такого варианта нет!!" << endl;
		timer;
		main();
	}






	int _; cin >> _;
	return 0;
}

void clear()
{
	system("cls");
}

void colorText()
{
	system("color 4");
	cout<<"test"<<endl;
}

void colorBackground() 
{
	system("color 57");
	cout << "test" << endl;
}
void sizeOfInt()
{
	cout <<"Размер типа Int: " << sizeof(int)<<" байта";
}

void sizeOfChar()
{
	cout << "Размер типа Char: " << sizeof(char)<<" байт";
}

void sizeOfDouble()
{
	cout << "Размер типа Double: " << sizeof(double) << " байт";
}

void sizeOfFloat()
{
	cout << "Размер типа Float: " << sizeof(float)<<" байта";
}

void sizeOfBool()
{
	cout << "Размер типа Bool: " << sizeof(bool)<<" байт";
}

void hello()
{
	cout << "Привет я функция!" << endl;
}

void square()
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << "# ";
		}
		cout << endl;
	}
}
