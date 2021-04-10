/*Hacer un programa para ingresar
por teclado un número y luego emitir por pantalla un cartel aclaratorio
indicando si el mismo es positivo, negativo o cero.*/
#include <iostream>
using namespace std;

int main (){
	int num;
	cout << "Ingresar un numero: ";
	cin >> num;
	if(num > 0){
        cout << "Es positivo";
	}
	else{
        if(num < 0){
            cout << "Es negativo";
        }
        else{
            cout << "Es cero";
        }

	}


return 0;
}
