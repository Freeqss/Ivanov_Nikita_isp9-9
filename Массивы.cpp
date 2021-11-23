#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int intarray[] = { 1,2,3,4,5,6,7,8,9,10 };
	short shortarray[] = { 1,123,2,1,2,3,2,1,23,2 };
	float floatarray[] = { 1.213,2.2323,2.123,2.5,5.3,7.3,3.3,4.3,4.43,5.3 };
	double doublearray[] = { 1.23213,4.3434,5.23143,3.23434,4.3423,343.234,5.33,7.2123,334.453,5.234,324.234 };
	char chararray[] = { '2','f','4','j','k','l','l','f','a','o' };
	long longarray[] = {1,4,234,32,3,43,2,4,234,2324};
	string stringarray[] = { "ffg","sda","sad","ssa","asd","wasd","dsaw","sawd","ssda","was"};
	bool boolarray[] = { 1,0,1,0,0,true,1,1,false,1 };
	cout << "\n\n[+] int\n" << "-> ";
	for (int i = 0; i < 10; i++)
	{
		cout << intarray[i] << " ";
	}
	cout << "\n\n[+] short\n" << "-> ";
	for (int i = 0; i < 10; i++)
	{
		cout << shortarray[i] << " ";
	}
	cout << "\n\n[+] float\n" << "-> ";
	for (int i = 0; i < 10; i++)
	{
		cout << floatarray[i] << " ";
	}
	cout << "\n\n[+] double\n" << "-> ";
	for (int i = 0; i < 10; i++)
	{
		cout << doublearray[i] <<" ";
	}
	cout << "\n\n[+] char\n" << "-> ";
	for (int i = 0; i < 10; i++)
	{
		cout << chararray[i] << " ";
	}
	cout << "\n\n[+] long\n" << "-> ";
	for (int i = 0; i < 10; i++)
	{
		cout << longarray[i] << " ";
	}
	cout << "\n\n[+] string\n" << "-> ";
	for (int i = 0; i < 10; i++)
	{
		cout << stringarray[i] <<" ";
	}
	cout << "\n\n[+] bool\n" << "-> ";
	for (int i = 0; i < 10; i++)
	{
		cout << boolarray[i] << " ";
	}




	int _; cin >> _;
	return 0;
}
