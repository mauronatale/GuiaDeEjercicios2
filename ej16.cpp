/*Hacer un programa para ingresar por teclado cuatro números.
Si los valores que se ingresaran están ordenados en forma creciente,
emitir el mensaje “Conjunto Ordenado”, caso contrario emitir el mensaje: “Conjunto Desordenado”.
Ejemplo 1: si los números que se ingresan son 8, 10, 12 y 14, entonces están ordenados.
Ejemplo 2: si los números que se ingresan son 8, 12, 12 y 14, entonces están ordenados.
Ejemplo 3: si los números que se ingresan son 10, 8, 12 y 14, entonces están desordenados.*/

#include <iostream>
using namespace std;

int main (){
	int num1, num2, num3, num4;
	cout << "Ingresar numero: ";
	cin >> num1;
	cout << "Ingresar numero: ";
	cin >> num2;
	cout << "Ingresar numero: ";
	cin >> num3;
	cout << "Ingresar numero: ";
	cin >> num4;

	if( num1 < num2 && num2 < num3 && num3 < num4 ){
        cout << "Conjunto ordenado" << endl;
	}
	if (num1 == num2 || num2 == num3 || num3 == num4){
        cout << "Conjunto ordenado" << endl;
	}
	else{
        cout << "Conjunto desordenado" << endl;
	}


	return 0;
}
