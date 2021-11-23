#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int season;
	cout << "Выбор [1] Лето [2] Осень [3] Зима [4] Весна" << endl;
	cout << "[+] Выберите время года: ";
	cin >> season;
	if (season == 1)
	{
		cout << "Вы выбрали Лето, можно одеться легко(шорты, майка), советую выпить холодного лимонада!!!" << endl;
	}
	else if (season == 2)
	{
		cout << "Вы выбрали Осень, прохладно, не забудь взять зонтик!" << endl;
	}
	else if (season == 3)
	{
		cout << "Вы выбрали Зиму, советую выпить тёплого CUM!" << endl;
	}
	else if (season == 4)
	{
		cout << "Вы выбрали Весну, наслаждайтесь солнцем!" << endl;
	}
	else
	{
		cout << "Времени года под таким номер не существует!!!" << endl;
	}

	int _; cin >> _;
	


	
}
