/*Hacer un programa para ingresar por teclado las cuatro notas de los exámenes obtenidas
por un alumno y luego emitir uno solo de los cartel de acuerdo a las siguientes condiciones:
- “Promociona”, si obtuvo en los cuatro exámenes nota 7 o más.
- “Rinde examen final”, si obtuvo nota 4 o más en por lo menos tres exámenes.
- “Recupera Parciales”, si obtuvo nota 4 o más en por lo menos uno de los exámenes.
- “Recursa la materia”, si no aprobó ningún examen parcial.*/

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
