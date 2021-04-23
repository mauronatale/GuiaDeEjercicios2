/*Hacer un programa para ingresar cinco números y listar cuántos de esos cinco números son positivos.*/
#include <iostream>
using namespace std;

int main (){
	int n, x, c=0;

	for(x=1 ; x<=5; x++){
        cout << "Ingresar numero: ";
        cin >> n;
        if(n > 0){
            c++;
        }
	}
	cout << "La cantidad de numeros positivos son: " << c << endl;
	return 0;
}
