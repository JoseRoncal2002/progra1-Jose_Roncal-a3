#include "pch.h"
#include <iostream>

using namespace std;


int main()
{
	int nota = 0;
	cout << "Ingrese Nota:\n";
	cin >> nota;
	if (nota >= 19)
		cout << "su nota es A  ";
	if (nota >= 16 and nota < 19)
		cout << "su nota es B  ";
	if (nota >= 13 and nota < 16)
		cout << "su nota es C  ";
	if (nota >= 10 and nota < 13)
		cout << "su nota es D  ";
	if (nota >= 1 and nota < 10)
		cout << "su nota es E  ";

	system("pause");
	return 0;
}
