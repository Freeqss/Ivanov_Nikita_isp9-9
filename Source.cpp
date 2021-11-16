#include <iostream>
#include <cmath>
using namespace std;



double calc(double num1, char operation,double num2) {
	
	if (operation == '/' && num2 == 0)
	{
		cout << "\n[-] Делить на ноль нельзя!!!" << endl;
		return -1;
	}
	switch (operation)
	{	
	case '+': return num1 + num2;
	case '-': return num1 - num2;
	case '*': return num1 * num2;
	case '/': return num1 / num2;
	case '#': return pow(num1, 2);
	case '^': return pow(num1, num2);
	default: return -1;
	}
}

int main()
{
	//Фуункции
	//АРгументы
	//Параметры
	setlocale(0, "");
	double num1, num2;
	char oper;
	cout << "[+] Калькулятор\n\n" << endl;

	cout << "[+] Введите первое значение: ";
	cin >> num1;
	if (cin.fail())
	{
		cout << "[-] Недопустимое значение!!!" << endl;
		return 0;
	}
	cout << "[+] Введите желаемое действие: ";
	cin >> oper;
	if (cin.fail())
	{
		cout << "[-] Недопустимое значение!!!" << endl;
		return 0;
	}
	if (oper == '#')
	{
		cout << calc(num1, oper, 0) << endl;;
		return 0;
	}
	cout << "[+] Введите первое значение: ";
	cin >> num2;
	if (cin.fail())
	{
		cout << "[-] Недопустимое значение!!!" << endl;
		return 0;
	}
	cout << calc(num1, oper, num2);

	int _; cin >> _;
	return 0;
}
