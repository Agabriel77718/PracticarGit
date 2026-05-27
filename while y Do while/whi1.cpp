/*Estructura Principal (do-while): Muestra un menú que se repita hasta que el usuario decida salir (Opción 3).

Opción 1: Registrar venta.

Opción 2: Reabastecer inventario.

Opción 3: Salir del programa.

Validación (do-while): Al iniciar, el programa debe pedir el stock inicial disponible.
 Esta cantidad no puede ser negativa. Si el usuario ingresa un número menor a 0, 
 se le debe volver a pedir hasta que ingrese un valor válido.

Procesamiento con condición (while): * 
Si elige la Opción 1 (Registrar venta), solicita la cantidad de artículos a vender.
 Usa un ciclo para validar que la cantidad solicitada no supere el stock disponible actual; si es mayor,
  muestra un error y pídele otra cantidad (o permite cancelar la operación regresando al menú). 
  Disminuye el stock si la venta es exitosa.

Si elige la Opción 2 (Reabastecer), pide la cantidad entrante (validando que sea positiva) y súmala al stock.*/
#include <iostream>
using namespace std;

int main(){
int opcion, numero=0;

do{

    cout<<"MERCADO"<<endl;
     cout<<"ME PUEDES DAR EL STOCK INICIAL DE TU NEGOCIO? PORFAVOR"<<endl;
     cin>>numero;
      cout<<"MENU DE OPCIONES"<<endl;
    cout<<"1. REGISTRAR VENTA"<<endl;
    cout<<"2.REABASTECER INVENTARIO"<<endl;
    cout<<"3. SALIR DEL PROGRAMA"<<endl;
    cin>>opcion;

    switch (opcion)
    {
    case 1:
         cout<<"DAME LA CANTIDAD DE ARTICULOS QUE QUIERES REGISTRAR"<<endl;
        break;
    
    default:
        break;
    }

} while (opcion);


    return 0;
}