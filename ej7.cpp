/*Hacer un programa para ingresar por teclado tres números e informar con una leyenda aclaratoria
si los tres son todos distintos entre sí, caso contrario no emitir nada.
Ayuda: Si A es distinto de B y B es distinto de C, eso no signica que A y C sean distintos. Ejemplo: A=8, B=6 y C=8.*/

#include <iostream>
using namespace std;

int main (){
	int a, b , c ;
	cout << "Ingresar el primer numero: ";
	cin >> a;
	cout << "Ingresar el segundo numero: ";
	cin >> b;
	cout << "Ingresar el tercer numero: ";
	cin >> c;
	if(a != b){
        if(b != c){
            if(a != c){
                cout << "Son distintos entre si.";
            }
        }
	}
	return 0;
}
