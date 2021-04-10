/*Hacer un programa para ingresar por teclado tres números y luego determinar e informar
con una leyenda aclaratoria si los tres son iguales entre sí, caso contrario no emitir nada.
Ayuda: Si A es igual a B y B es igual a C, entonces A y C son iguales.*/
#include <iostream>
using namespace std;

int main (){
    int a, b, c;
    cout << "Ingresar primer numero: ";
    cin >> a;
    cout << "Ingresar segundo numero: ";
    cin >> b;
    cout << "Ingresar tercer numero: ";
    cin >> c;
    if (a == b){
        if(b == c){
            cout << "Los numeros son iguales.";
        }
    }


	return 0;
}
