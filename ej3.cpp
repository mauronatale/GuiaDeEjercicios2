/*Hacer un programa para ingresar por teclado un número y luego informar
por pantalla con un cartel aclaratorio si el mismo es par o impar.*/

#include <iostream>
using namespace std;

int main (){
	int num1, r;
	cout << "Ingresar un numero: ";
	cin >> num1;
	r = num1 % 2;
	if (r == 0){
        cout << "Es par";
	}
	else{
        cout << "Es Impar";
	}

	return 0;
}
