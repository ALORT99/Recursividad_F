#include <iostream>
/*ALEXANDER GONZALEZ ORTEGA*/
/*Ico-22*/

using namespace std;
int main ()
{
	int n;
	char elemento;
	cout << "ALEXANDER GONZALEZ ORTEGA" << endl;
	cout << "PROGRAMA PARA MOSTRAR LOS NUMEROS DE FIBONACCI CON LIMITE EN 60" << endl;
	do
	{
	cout << "Ingresa un numero entero positivo" <<endl;
	cin >> n;
	float arreglo [n+1];
	if (n==0)
	{
		arreglo [0]=0; //Valor del arreglo
	}
	else
	{
		arreglo [0]=0; //Valor del arreglo
		arreglo [1]=1; //Valor del arreglo
	}
	if (n<=60) //Condicion para un valor definido
	{
		for(int i=0; i<n+1; i++) //Valorar condicion
		{
			if (i<=1) //Condicion para el valor
			{
				cout << "Fibonacci " << arreglo [i] << endl;
			}
			else
			{
				arreglo [i]= arreglo [i-1] + arreglo [i-2]; //Operacion de arreglos
				cout << "Fibonacci " << arreglo [i] << endl; //Mostrar arreglo
			}
		}
		cout << endl;
	}
	else
	{
		cout << "Error" << endl << endl;
	}
	cout << "¿Quieres repetir el programa? S/N" << endl;
	cin >> elemento;
	cout << endl;
	}while (elemento!= 'N');

	return 0;
}
