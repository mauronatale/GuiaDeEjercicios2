/*Hacer un programa para ingresar por teclado la fecha de nacimiento de una persona,
ingresando día, mes y año como 3 datos individuales. Luego ingresar la fecha actual ingresando día, mes y año como
3 datos individuales. Calcular luego la edad en años de esa persona y listarlo por pantalla.
Ejemplo 1. Si se ingresa como fecha de nacimiento: 3/12/2000 y la fecha actual es 26/2/2019 la
edad de esa persona es 18 ya que los 19 recién los cumple en diciembre.
Ejemplo 2. Si se ingresa como fecha de nacimiento: 3/1/2000 y la fecha actual es 26/2/2019
la edad de esa persona es 19. Ejemplo 3. Si se ingresa como fecha de nacimiento: 28/2/2000 y
la fecha actual es 26/2/2019 la edad de esa persona es 18 ya que le faltan 2 días para cumplir los 19 años.*/

#include <iostream>
using namespace std;

int main (){
	int nacimiento_dia, nacimiento_mes, nacimiento_anio, actual_dia, actual_mes, actual_anio, edad;
	cout << "Ingresar el dia de la fecha su nacimiento: ";
	cin >> nacimiento_dia;
	cout << "Ingresar el mes de la fecha su nacimiento: ";
	cin >> nacimiento_mes;
	cout << "Ingresar el anio de nacimiento: ";
	cin >> nacimiento_anio;
	cout << "Ingresar dia actual: ";
	cin >> actual_dia;
	cout << "Ingresar el mes acutal: ";
	cin >> actual_mes;
	cout << "Ingresar el anio actual: ";
	cin >> actual_anio;

	edad = actual_anio - nacimiento_anio - 1;
	if (actual_mes > nacimiento_mes){
        edad++;
	}
	if(actual_mes == nacimiento_mes){
        edad++;
	}
	cout << "La edad es: " << edad;
	return 0;
}
