/*Basado en los 2 ejercicios anteriores, hacer un programa para ingresar por teclado la
longitud de los tres lados de un triángulo y luego listar que tipo de triángulo es:
- Equilátero: si los tres lados son iguales.
- Isósceles: si dos de los tres lados son iguales.
- Escaleno: si los tres lados son distintos entre sí.*/

#include <iostream>
using namespace std;

int main (){
	int a, b, c;
	cout << "Ingresar la longitud del primer lado: ";
	cin >> a;
	cout << "Ingresar la longitud del segundo lado: ";
	cin >> b;
	cout << "Ingresar la longitud del tercer lado: ";
	cin >> c;
	if(a == b && b == c){
        cout << "Es un triangulo equilatero.";
	}
	if (a==b && a =! c){
        cout << "Es un traingulo isoseles";
	}
b	if (a != b && b != c && c=! a ){
        cout << "Es un triangulo escaleno";
	}
	return 0;
}
