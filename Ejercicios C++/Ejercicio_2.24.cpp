#include "pch.h"
#include <iostream>
using namespace std;


int main()
{
	int numero = 0;
	
	cout << "Ingrese un numero entero:\n";
	cin >> numero;
	if (numero % 2 == 0)
		cout << "El numero es par" << endl;
	if (numero % 2 != 0)
		cout << "El numero es impar" << endl;
	
	system("pause");
	return 0;
}

