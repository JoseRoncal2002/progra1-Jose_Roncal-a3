#include "pch.h"
#include <iostream>

using namespace std;


int main()
{
	int numero1 = 0;
	int numero2 = 0;
	int numero3 = 0;
	int numero4 = 0;
	int numero5 = 0;


	cout << "Ingrese 5 numeros:\n";
	cin >> numero1 >> numero2 >> numero3 >> numero4 >> numero5;
	cout << "El mayor es:\n";
	if (numero1 > numero2 and numero1 > numero3 and numero1 > numero4 and numero1 > numero5)
		cout << numero1 << endl;
	if (numero2 > numero1 and numero2 > numero3 and numero2 > numero4 and numero2 > numero5)
		cout << numero2 << endl;
	if (numero3 > numero2 and numero3 > numero1 and numero3 > numero4 and numero3 > numero5)
		cout << numero3 << endl;
	if (numero4 > numero2 and numero4 > numero3 and numero4 > numero1 and numero4 > numero5)
		cout << numero4 << endl;
	if (numero5 > numero2 and numero5 > numero3 and numero5 > numero4 and numero5 > numero1)
		cout << numero5 << endl;
	cout << "El menor es:\n";
if (numero1 < numero2 and numero1 < numero3 and numero1 < numero4 and numero1 < numero5)
cout << numero1 << endl;
if (numero2 < numero1 and numero2 < numero3 and numero2 < numero4 and numero2 < numero5)
cout << numero2 << endl;
if (numero3 < numero2 and numero3 < numero1 and numero3 < numero4 and numero3 < numero5)
cout << numero3 << endl;
if (numero4 < numero2 and numero4 < numero3 and numero4 < numero1 and numero4 < numero5)
cout << numero4 << endl;
if (numero5 < numero2 and numero5 < numero3 and numero5 < numero4 and numero5 < numero1)
cout << numero5 << endl;
	system("pause");
	return 0;
}