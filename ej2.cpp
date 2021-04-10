/*Hacer un programa para ingresar por teclado dos números y luego informar
por pantalla con un cartel aclaratorio si el primer número es múltiplo del segundo.*/
#include <iostream>
using namespace std;

int main (){
	int num1, num2, division;
	cout << "Ingresar el primer numero: ";
	cin >> num1;
	cout << "Ingresar el segundo numero: ";
	cin >> num2;
	division = (num2 % num1);
	if (division == 0 ){
        cout << "Es multiplo.";
	}
	else{
        cout << "No es multiplo";
	}
	return 0;
}
