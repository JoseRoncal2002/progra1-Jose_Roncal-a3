#include "pch.h"
#include <iostream>

using namespace std;


int main()
{
	int numeroLapices = 0;
	int caja100 = 0;
	int caja50 = 0;
	int caja10 = 0;
	int caja1 = 0;

	cout << "Ingrese Numero de Lapices:\n";
	cin >> numeroLapices;
	caja100 = numeroLapices / 100;
	cout << "Numero de cajas de un ciento:" << caja100 << endl;
	caja50 = ((numeroLapices % 100)/50);
	cout << "Numero de cajas de medio ciento:" << caja50 << endl;
	caja10 = (((numeroLapices % 100) % 50)/10);
	cout << "Numero de cajas de una decena:" << caja10 << endl;
	caja1 = (((numeroLapices % 100) % 50)%10)/1;
	cout << "Numero de lapices sin embolsar:" << caja1 << endl;
	

	system("pause");
	return 0;
}
