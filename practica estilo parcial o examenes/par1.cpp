/*Ejercicio Práctica: "Sistema de Control de Caja Fuerte"
Indicaciones:
Cree un programa en C++ que simule el sistema de control de una caja fuerte digital mediante un menú interactivo. 
El sistema debe repetirse continuamente y solo cerrarse cuando el usuario elija la opción de salir.

El menú debe desplegar las siguientes opciones en pantalla:

Ingresar clave de acceso

Generar código de emergencia

Salir del sistema

Requerimientos para cada opción:
Opción 1 (Ingresar clave de acceso):
Deberá solicitar al usuario que digite una clave numérica de 4 dígitos.

Si la clave es exactamente 1234, imprima el mensaje: "¡Acceso Concedido!".

Si la clave es exactamente 9999, imprima el mensaje: "Modo Administrador Activado".

Si ingresa cualquier otra clave, imprima: "Acceso Denegado".

Opción 2 (Generar código de emergencia):
El sistema debe simular la carga de un código de seguridad.

Solicite al usuario que ingrese un número límite (por ejemplo, 5).

Utilice un ciclo para imprimir en pantalla una cuenta desde el 1 hasta el número límite que ingresó el usuario. 
(Ejemplo: si digita 3, en pantalla debe verse: 1, 2, 3).

Opción 3 (Salir del sistema):
Deberá mostrar un mensaje de despedida: "Saliendo del sistema... ¡Adiós!" y terminar la ejecución del menú.

Caso por defecto (Opción no válida):
Si el usuario digita cualquier otro número en el menú que no sea 1, 2 o 3, el programa debe avisar: 
"Opción inválida, intente de nuevo" y volver a mostrar el menú.*/
#include <iostream>
using namespace std;

int main(){
int opciones, clave, limite;
    
do{
    
cout<<"Bienvenido a tu caja fuerte digital"<<endl;
cout<<"Porfavor elija una de las opciones otorgadas"<<endl;

 cout<<"1.Ingresar clave de acceso"<<endl;
 cout<<"2.Generar codigo de emergencia"<<endl;
 cout<<"3.salir del sistema"<<endl;
 cin>>opciones;
switch (opciones)
{
case 1:
    cout<<"Elegiste: Ingresar clave de acceso"<<endl;
    cout<<"Digita la clave"<<endl;
    cin>>clave;

    if (clave == 1234)
    {
       cout<<"acceso concedido"<<endl;
    }
    else if (clave == 9999)
    {
        cout<<"MODO ADMINISTRADOR ACTIVADO"<<endl;
    }
    else
    {
       cout<<"ACCESO DENEGADO"<<endl;
    }
    
    break;
case 2:
    
     cout<<"Elegiste:Generar codigo de emergencia"<<endl;
     cout<<"Porfavor ingresa un numero del 1 al 5 para cuenta regresiva"<<endl;
     cin>>limite;
     for (int i = 1; i <= limite; i++)
     {
      cout<<i<<""<<endl;
     }
     
    break;
case 3:
    cout<<"Saliendo del sistema"<<endl;
    break;    
default: cout<<"opcion no valida, intente de nuevo"<<endl;
}

}while (opciones != 3);

    return 0;
}


