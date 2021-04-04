#include <istream>
#include "Rational.h"
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Номер елемента в класі Rational : " << Object::Count() << endl;
	Rational a1;
	cout << "Номер елемента в класі Rational : " << Object::Count() << endl;
	Rational b1;
	cout << "Номер елемента в класі Rational : " << Object::Count() << endl;
	Rational a2;
	cout << "Номер елемента в класі Rational : " << Object::Count() << endl;
	Rational a(17, 2, 33, 4);

	++a;
	cout << a;
	cout << endl;
	--a;
	cout << a;
	a++;
	cout << a;
	a--;
	cout << a;
	cout << endl;
	cout << a.operator string();
	Rational b(17, 2, 33, 4);
	cin >> b;
	cout << b;
	cout << endl;
	cout << b.operator string();
	b.Dodavannya();
	cout << endl;
	b.Mnojennya();
	cout << endl;
	b.Vidnimannya();
	cout << endl;
	b.Value();

}