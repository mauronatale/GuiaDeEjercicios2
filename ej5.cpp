/*Un negocio de perfumería efectúa descuentos según el importe de la venta.
- Si el importe es menor a $100 aplicar un descuento del 5%
- Si el importe es entre $100 y hasta $500 aplicar un descuento del 10%
- Si el importe es mayor a $500 aplicar un descuento del 15%
Hacer un programa donde se ingresa el importe original sin descuento y que se informe por
pantalla el importe con el descuento ya aplicado.*/
#include <iostream>
using namespace std;

int main (){
	int importe_original, importe_descuento, descuento;
	cout << "Ingresar el importe original sin descuento: ";
	cin >> importe_original;
	if(importe_original < 100){
        descuento = (importe_original * 95) / 100;
	}

	if(importe_original >= 100 && importe_original <= 500 ){
             descuento = (importe_original * 90) / 100;
        }

    if(importe_original > 500){
            descuento = (importe_original * 85) / 100;
        }

    cout << "El importe con descuento es: " << descuento << endl;

}




