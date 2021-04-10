/*Hacer un programa para ingresar tres números y listar el máximo de ellos.*/
#include <iostream>
using namespace std;

int main (){
	int num1, num2, num3;
	cout << "Ingresar el primer numero: ";
	cin >> num1;
	cout << "Ingresar el segundo numero: ";
	cin >> num2;
	cout << "Ingresar el tercer numero: ";
	cin >> num3;
	if(num1 > num2 && num1 > num3){
        cout << "El numero mayor es: " << num1;
	}
	if(num2 > num1 && num2 > num3){
        cout << "El numero mayor es: " << num2;
	}
	if(num3 > num2 && num3 > num1){
        cout << "El numero mayor es: " << num3;
	}
	return 0;
}
