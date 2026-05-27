/*Pide una opción (1=Sumar, 2=Restar, 3=Multiplicar, 4=Dividir) y dos números,
realiza la operación.*/
#include <iostream>
using namespace std;

int main (){
int opcion,n1,n2,resultado;


cout<<"Bienvenido al menu de opciones"<<endl;

cout<<"1.SUMAR"<<endl;
cout<<"2.RESTAR"<<endl;
cout<<"3.MULTIPLICAR"<<endl;
cout<<"4.DIVIDIR"<<endl;
cin>>opcion;

switch (opcion)
{
case 1: 
    cout<<"Elegiste hacer una suma"<<endl;

    cout<<"Porfavor ingrese dos numeros a sumar"<<endl;
    cin>>n1;

    cout<<"mas"<<endl;
        cin>>n2;

        resultado = n1 + n2;

        cout<<"el resultado de la suma es:"<<resultado<<endl;
    break;
    case 2:
      cout<<"Elegiste  hacer resta"<<endl;

      cout<<"ingresa el primer numero"<<endl;
      cin>>n1;

      cout<<"ingresa el segundo numero"<<endl;
      cin>>n2;

       resultado = n1 - n2;

        cout<<"el resultado de la resta es:"<<resultado<<endl;
break;
      case 3:
      cout<<"Elegiste  multiplicar"<<endl;

      cout<<"ingresa el primer numero"<<endl;
      cin>>n1;

      cout<<"ingresa el segundo numero"<<endl;
      cin>>n2;

       resultado = n1 * n2;

        cout<<"el resultado de la multiplicacion es:"<<resultado<<endl;      
break;
        case 4:
      cout<<"Elegiste  hacer una division"<<endl;

      cout<<"ingresa el primer numero"<<endl;
      cin>>n1;

      cout<<"ingresa el segundo numero"<<endl;
      cin>>n2;

       resultado = n1 / n2;

        cout<<"el resultado de la division es:"<<resultado<<endl;      
break;

default:
       cout<<"opcion no valida.porfavor intente de nuevo "<<endl;
    break;
}






    return 0;
}


