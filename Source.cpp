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
	
	cout << "[+]��������� - " << "'�������������� ������'" << endl;
	cout << "\n[1] ����� [2] ������� [3] ����������� [4] ������� [5] ���� [6] ������� [7] �������������" << endl << endl;;
	cout << "[+] �������� ������: ";
	std::cin >> figure;
	clear;

	switch (figure)
	{
	case 1:
	{

		cout << "[+] ������ - �����" << endl;
		cout << "\n[1] ��������������\n[2] ������������" << endl;
		cout << "\n[+] �������� ���: ";
		std::cin >> type;
		switch (type)
		{
		case 1:
		{
			cout << "[+] ������ - �����\n[+] ��� ������ - ��������������" << endl;
			cout << "\n[+] ������� ������ ������: ";
			std::cin >> size;
			if (std::cin.fail())
			{
				cout << "������ �������� �� ����������" << endl;
				return 0;
			}
			cout << "[+] �������� ������ �� �������� ����� �������� ������: ";
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
			cout << "[+] ������ - �����\n[+] ��� ������ - ������������" << endl;
			cout << "\n[+] ������� ������ ������: ";
			std::cin >> size;
			if (std::cin.fail())
			{
				cout << "������ �������� �� ����������" << endl;
				return 0;
			}
			cout << "\n[+] �������� ������ �� �������� ����� �������� ������: ";
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
			cout << "������ �������� �� ����������" << endl;
			return 0;
			break;
		}
		}
		break;
	}
	case 2:
	{

		cout << "[+] ������ - �������" << endl;
		cout << "\n[1] ����������\n[2] �����" << endl;
		cout << "\n[+] �������� ���: ";
		std::cin >> sqrtype;
		switch (sqrtype)
		{
		case 1:
		{
			clear;
			cout << "[+] ������ - �������" << endl;
			cout << "[+] ��� - ����������" << endl;
			cout << "\n[+] ������� ������ ��������: ";
			cin >> sqrsize;
			if (cin.fail())
			{
				cout << "������ �������� �� ����������!!" << endl;
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
			cout << "[+] ������ - �������" << endl;
			cout << "\n[+] ��� - �����" << endl;
			cout << "\n[+] ������� ����� ��������: ";
			cout << "\n[+] ������� ������ ��������: ";
			std::cin >> sqrsize;
			if (std::cin.fail())
			{
				cout << "������ �������� �� ����������!!" << endl;
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
			cout << "[+] ������ �������� �� ����������" << endl;
			return 0;
			break;
		}
		}
		break;
	}
	case 3:
	{
		clear;
		cout << "[+] ������ - �����������" << endl;
		bool test = true;;
		while (test == true)
		{
			clear;
			cout << "\n[+] ������� ������: ";
			cin >> size;
			if (size % 2 != 0)
			{
				test = false;
			}
			else
			{
				cout << "���� ������ ����� ��������!!";
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
		cout << "[+] ������ - �������" << endl;
		bool test = true;;
		while (test == true)
		{
			clear;
			cout << "\n[+] ������� ������: ";
			cin >> size;
			if (size % 2 != 0)
			{
				test = false;

			}
			else
			{
				cout << "���� ������ ����� ��������!!";
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
		cout << "[+] ������ - ����" << endl;
		bool test = true;;
		while (test == true)
		{
			clear;
			cout << "\n[+] ������� ������: ";
			cin >> size;
			if (size % 2 != 0)
			{
				test = false;

			}
			else
			{
				cout << "���� ������ ����� ��������!!";
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
		cout << "[+] ������ - �������" << endl;
		bool test = true;;
		while (test == true)
		{
			clear;
			cout << "\n[+] ������� ������: ";
			cin >> size;
			if (size % 2 != 0)
			{
				test = false;

			}
			else
			{
				cout << "���� ������ ����� ��������!!";
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
		cout << "[+] ������ - �������������" << endl;
		cout << "\n[1] �����\n[2] ����������" << endl;
		cout << "\n[+] �������� ���: ";
		std::cin >> recttype;
		switch (recttype)
		{
		case 1:
		{
			clear;
			cout << "[+] ������ - �������������" << endl;
			cout << "\n[+] ��� - �����" << endl;
			cout << "\n[+] ������� ����� ��������������: ";
			std::cin >> dlina;
			if (std::cin.fail())
			{
				cout << "������ �������� �� ����������!!" << endl;
				return 0;
			}
			cout << "\n[+] ������� ������ ��������������: ";
			std::cin >> shirina;
			if (std::cin.fail())
			{
				cout << "������ �������� �� ����������!!" << endl;
				return 0;
			}
			if (dlina == shirina)
			{
				cout << "\n[-] ������ �������� �� ��������� ��� ������ - \"�������������\"" << endl;
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
			cout << "[+] ������ - �������������" << endl;
			cout << "\n[+] ��� - ����������" << endl;
			cout << "\n[+] ������� ����� ��������������: ";
			std::cin >> dlina;
			if (std::cin.fail())
			{
				cout << "������ �������� �� ����������!!" << endl;
				return 0;
			}
			cout << "\n[+] ������� ������ ��������������: ";
			std::cin >> shirina;
			if (std::cin.fail())
			{
				cout << "������ �������� �� ����������!!" << endl;
				return 0;
			}
			if (dlina == shirina)
			{
				cout << "\n[-] ������ �������� �� ��������� ��� ������ - \"�������������\"" << endl;
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
			cout << "[+] ������ �������� �� ����������" << endl;
			return 0;
			break;
		}
		}
		break;
	}
	default:
	{
		cout << "[+] ������ �������� �� ����������" << endl;
		return 0;
		break;
	}
	}
	
	
	
	int _; std::cin >> _;
	return 0;
}
