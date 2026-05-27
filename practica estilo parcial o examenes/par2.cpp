/*Ejercicio Práctica: "Sistema de Gestión Comercial y Planilla"
Indicaciones:
Cree un programa en C++ utilizando un bucle do-while y un menú switch.
 El sistema debe repetirse continuamente hasta que se elija la opción de salir.

El menú debe tener las siguientes opciones:

Facturar Venta de Consolas (Cálculo de IVA)

Calcular Pago Neto de Empleado (Cálculo de Renta)

Cerrar Sistema

Requerimientos para cada opción:
Opción 1 (Facturar Venta):

Pide al usuario el precio base de una consola (ej. una PS5) y la cantidad que va a comprar el cliente.

Calcula el Subtotal (precio multiplicado por cantidad).

Si el subtotal es mayor a $500, aplícale un descuento del 5% al subtotal. Si no, el descuento es 0.

A ese resultado, calcúlale el IVA (13%).

Muestra en pantalla el desglose prolijo:

Subtotal: $...

Descuento aplicado: $...

IVA cobrado: $...

Total Neto a Pagar: $...

Opción 2 (Calcular Pago Neto de Empleado):

Solicite el sueldo bruto de un empleado de la tienda.

Dependiendo de cuánto gane, se le aplicará un porcentaje de descuento de Renta usando un if / else if:

Si gana menos o igual a $500: Se le descuenta el 5% de renta.

Si gana más de $500 y menos o igual a $1000: Se le descuenta el 10% de renta.

Si gana más de $1000: Se le descuenta el 15% de renta.

Calcule el Sueldo Neto (Sueldo Bruto menos la Renta).

Muestra el desglose en pantalla:

Sueldo Bruto: $...

Retención de Renta: $...

Sueldo Neto a Recibir: $...

Opción 3 (Cerrar Sistema):

Muestra un mensaje: "Cerrando caja y sistema... ¡Buen día!" y finaliza el ciclo.

Default:

Mensaje de error si eligen otra opción.*/
#include <iostream>
using namespace std;

int main(){





    return 0;
}