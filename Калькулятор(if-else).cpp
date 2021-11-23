#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	double num1 = 0, num2 = 0,res = 0;
	char oper;
	cout << "[Супер-пупер калькулятор]" << endl;

		cout << "Введите первое число: ";
		cin >> num1;
		cout << endl;
		cout << "[+] сложение [-] вычитание [/] деление [*] умножение [%] деление от остатка" << endl;;
		cout << "Введите символ действия: ";
		cin >> oper;
		cout << endl;
		cout << "Введите второе число: ";
		cin >> num2;
		
		if (oper == '+')
		{
			res = num1 + num2;
		}
		else if (oper == '-')
		{
			res = num1 - num2;
		}
		else if (oper == '/')
		{
			if (num2 == 0)
			{
				cout << "Ошибка!!!" << endl;
				cout << "деление на ноль запрещено!!!";
				return 0;
			}
			res = num1 / num2;
		}
		else if (oper == '*')
		{
			res = num1 * num2;
		}
		else if (oper == '%')
		{
			int res1 = int(num1) % int(num2);
			res = res1;
		}
		else
		{
			cout << "Ошибка ввода, неприемлимое значение!!!" << endl;
			return 0;
		}
		cout << "[Результат] " <<num1 <<" " << oper << " " << num2 << " = " << res << endl;
		
		
	return 0;
}
