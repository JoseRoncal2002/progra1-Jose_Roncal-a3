#include "pch.h"
#include <iostream>

using namespace std;


int main()
{
	int cantidadSobres = 0;
	int empaques50 = 0;
	int empaques30 = 0;
	int empaques12 = 0;
	int caja1 = 0;

	cout << "Ingrese la cantidad de sobres:\n";
	cin >> cantidadSobres;
	empaques50 = cantidadSobres / 50;
	cout << "Cantidad de empaques de 50:" << empaques50 << endl;
	empaques30 = ((cantidadSobres % 50) / 30);
	cout << "Cantidad de empaques de 30:" << empaques30 << endl;
	empaques12 = (((cantidadSobres % 50) % 30) / 12);
	cout << "Cantidad de empaques de 12:" << empaques12 << endl;
	system("pause");
	return 0;
}

