#include<iostream>
using namespace std;

void char_func()
{
	char a = 'A';
	cout << a << endl;
	cout << sizeof(a) << endl;
}

void bool_func()
{
	bool a = (5 < 2);
	cout << a << endl;
	cout << sizeof(a) << endl;
}

void short_func()
{
	short a = 857;
	cout << a << endl;
	cout << sizeof(a) << endl;
}

void int_func()
{
	int a = 78464654;
	cout << a << endl;
	cout << sizeof(a) << endl;
}

void long_func()
{
	long a = 654976524;
	cout << a << endl;
	cout << sizeof(a) << endl;
}

void float_func()
{
	float a = 5.369f;
	cout << a << endl;
	cout << sizeof(a) << endl;
}

void double_func()
{
	double a = 12.3654789654;
	cout << a << endl;
	cout << sizeof(a) << endl;
}

void longdouble_func()
{
	long double a = 54.6555654976524L;
	cout << a << endl;
	cout << sizeof(a) << endl;
}

void widechar_func()
{
	wchar_t a = L'A';
	wcout << a << endl;
	cout << sizeof(a) << endl;
}


int main()
{
	char_func();
	bool_func();
	short_func();
	int_func();
	long_func();
	float_func();
	double_func();
	longdouble_func();
	widechar_func();
}
