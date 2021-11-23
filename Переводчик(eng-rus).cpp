#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int choice,word;

	cout << "[Переводчик]\n" << endl;
	cout << "[1]Русские слова" << endl;
	cout << "[2]Английские слова" << endl;
	cout << "\n[-]Выберите перевод:";
	cin >> choice;

	switch (choice)
	{
	case 1:
		cout << "\n [1] Кухня\n [2] Машина\n [3] Мама\n [4] Вертолет\n [5] Вода\n [6] Монитор\n [7] Бегать\n [8] Кружка\n [9] Стол\n [10] Папка\n [11] Веселый\n [12] Кто\n [13] Где\n [14] Я\n [15] Папа\n"<<endl;
		cout << " Выбор слова: ";
		cin >> word;
		switch (word) {
		case 1:                                      
			cout << "\n[+] Кухня - kitchen";
			break;
		case 2:
			cout << "\n[+] Машина - Car";
			break;
		case 3:
			cout << "\n[+] Мама - Mother";
			break;
		case 4:
			cout << "\n[+] Вертолет - Helicopter";
			break;
		case 5:
			cout << "\n[+] Вода - Water";
			break;
		case 6:
			cout << "\n[+] Монитор - Screen";
			break;
		case 7:
			cout << "\n[+] Бегать - Run";
			break;
		case 8:
			cout << "\n[+] Кружка - Cup";
			break;
		case 9:
			cout << "\n[+] Стол - Table";
			break;
		case 10:
			cout << "\n[+] Папка - Folder";
			break;
		case 11:
			cout << "\n[+] Веселый - Funny";
			break;
		case 12:
			cout << "\n[+] Кто - Who";
			break;
		case 13:
			cout << "\n[+] Где - Where";
			break;
		case 14:
			cout << "\n[+] Я - Me";
			break;
		case 15:
			cout << "\n[+] Папа - Daddy";
			break;

		default:
			cout << "Такого слова в переводчике нет!";
			break;
		}
		break;
	case 2:
		cout << "\n [1] House\n [2] Door\n [3] Mouse\n [4] Boat\n [5] Chair\n [6] Computer\n [7] Hardware\n [8] Hair\n [9] Software\n [10] Line\n [11] Keyboard\n [12] Makeover\n [13] Jeans\n [14] Cloud\n [15] City" << endl;
		cout << " Выбор слова: ";
		cin >> word;
		switch (word)
		{
		case 1:
			cout << "\n [+] House - Дом";
			break;
		case 2:
			cout << "\n [+] Door - Дверь";
			break;
		case 3:
			cout << "\n [+] Mouse - Мышь";
			break;
		case 4:
			cout << "\n [+] Boat - Лодка";
			break;
		case 5:
			cout << "\n [+] Chair - Стул";
			break;
		case 6:
			cout << "\n [+] Computer - Компьютер";
			break;
		case 7:
			cout << "\n [+] Hardware - Оборудование";
			break;
		case 8:
			cout << "\n [+] Hair - Волосы";
			break;
		case 9:
			cout << "\n [+] Software - Програмное обеспечение";
			break;
		case 10:
			cout << "\n [+] Line - Линия";
			break;
		case 11:
			cout << "\n [+] Keyboard - Клавиатура";
			break;
		case 12:
			cout << "\n [+] Makeover - Макияж";
			break;
		case 13:
			cout << "\n [+] Jeans - Джинсы";
			break;
		case 14:
			cout << "\n [+] Cloud - Облако";
			break;
		case 15:
			cout << "\n [+] City - Город";
			break;
		default:
			cout << "\n There is no such word in the translator!";
			break;
		}
		break;
	default:
		cout << "Такого варианта не существует!!!" << endl;
		break;
	}
	


	return 0;
}
