#include <iostream>
using namespace std;
int main()
{ 
	int i, numero[11];
	for (i = 1; i < 11; i++)
	{
		cout << "ingrese el numero " << i << ": "<< endl;
		cin >> numero [i];
	}
	for (i=10; i >= 1; i--)
	{
		cout << "los numeros son al reves son: " << numero[i] << endl;
	}

	//Programa que pida 10 números, calcule su media y luego muestre los que están por encima de la media.
	/*
	no pude hacer este codigo
	int i, numero[11];
	int suma = 0;
	for (i = 1; i < 11; i++)
	{
		cout << "ingrese el numero " << i << ": " << endl;
		cin >> numero[i];
	}
	   suma = numero[i]/10;
	   cout <<"la media es "<< suma;
	   */
	
	   // Programa que pida 10 números, para que calcule cuál es el mayor de ellos
	int numeros, k, j;
	for (k = 1; k <= 10; k++)
	{
		cout << "ingrese el numero " << k << ":" << endl;
		cin >> numeros;
		if (numeros > k)
			j = numeros;
	}
	cout << " El mayor numero es:" << j << endl;
}
