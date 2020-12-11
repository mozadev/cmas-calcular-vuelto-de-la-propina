/*
Pedro recibe de su papá la propina por haberse portado bien durante la semana. Pedro, un niño de 10 años y amante de los
caramelos, va a la tienda a comprarse todos los caramelos que le alcancen con su propina.
Si en la tienda tienen 3 tipos de caramelos: Ambrosoli, Tic Tac y Donofrio, cuyos precios son 0.75, 1.15 y 0.65, respectivamente.
Escribir un programa en C++, que reciba la cantidad de caramelos por cada tipo, el monto de propina que recibió el niño y
calcule el monto de la compra. Adicionalmente la aplicación mostrará si el dinero de la propina fue o no suficiente para comprar 
los caramelos. Ejemplo: Ingrese la cantidad de caramelos que va a comprar por el Tipo 1: 5 Ingrese la cantidad de caramelos
que va a comprar por el Tipo 2: 1 Ingrese la cantidad de caramelos que va a comprar por el Tipo 3: 6 Ingrese el Monto de la
Propina: 3.5 El monto total de la compra es: 8.8 LA PROPINA NO FUE SUFICIENTE PARA PAGAR POR LOS CARAMELOS

*/


#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<stdio.h>
#include<math.h>

using namespace std;

float calculacaramelos(int t1, int t2, int t3)
{
	return t1*0.75 + t2*1.15 + t3*0.65;
}


int main()
{

	int  t1, t2, t3;
	float propina;
	
	cout << "ingrese cantidad de caramelos ambrosoli : "; cin >> t1;
	cout << "ingrese cantidad de caramelos tic tac: "; cin >> t2;
	cout << "ingrese cantidad de caramelos donofrio: "; cin >> t3;
	cout << "ingrese monto propina: "; cin >> propina;
	if (calculacaramelos(t1, t2, t3) > propina)
		cout << "no alcanza tu dinero para comprar";
	else
		cout << "vuelto" << propina - calculacaramelos(t1, t2, t3);

	_getch();
	
}

