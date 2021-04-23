/*Hacer un programa para ingresar cinco números y listar el máximo de ellos.*/
#include <iostream>
using namespace std;

int main (){
	int num1, num2, num3, num4, num5;
	cout << "Ingresar el primer numero: ";
	cin >> num1;
	cout << "Ingresar el segundo numero: ";
	cin >> num2;
	cout << "Ingresar el tercer numero: ";
	cin >> num3;
	cout << "Ingresar el cuarto numero: ";
	cin >> num4;
	cout << "Ingresar el quinto numero: ";
	cin >> num5;
	if(num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5){
        cout << "El numero mayor es: " << num1;
	}
	else{
        if(num2 > num3 && num2 > num4 && num2 > num5){
            cout << "El numero mayor es: " << num2;
        }
	else{

        if(num3 > num4 && num3 > num5){
            cout << "El numero mayor es: " << num3;
        }
        else{
                if(num4 > num5){
                    cout << "El numero mayor es: " << num4;
                }


        else{
            cout << "El numero mayor es: " << num5;
        }
	}
}
}




	return 0;
}
