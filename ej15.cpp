/*Hacer un programa para ingresar por teclado las cuatro notas de los ex�menes obtenidas
por un alumno y luego emitir uno solo de los cartel de acuerdo a las siguientes condiciones:
- �Promociona�, si obtuvo en los cuatro ex�menes nota 7 o m�s.
- �Rinde examen final�, si obtuvo nota 4 o m�s en por lo menos tres ex�menes.
- �Recupera Parciales�, si obtuvo nota 4 o m�s en por lo menos uno de los ex�menes.
- �Recursa la materia�, si no aprob� ning�n examen parcial.*/

#include <iostream>
using namespace std;

int main (){
	int nota, contador7, contador4, x;
	contador7 = 0;
	contador4 = 0;
    for( x= 0; x < 4; x++){
        	cout << "Ingresar Nota: ";
            cin >> nota;
            if ( nota >= 7 ){
            contador7 ++;
            contador4 ++;
        }
        else{
            if( nota >= 4){
            contador4 ++;
        }
    }
    }
    if ( contador7 == 4){
        cout << "Promociona la materia.";
    }
    else{
        if (contador4 >= 3 ){
            cout << "Rinde examen final.";
        }
        else{
            if (contador4 >= 1){
                cout << "Recupera parcial.";
            }
            else{
                cout << "Recursa la materia.";
            }
        }
    }



	return 0;
}
