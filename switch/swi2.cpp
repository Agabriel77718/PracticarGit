# include <iostream>
using namespace std;
//hacer unos botones que den acceso de distitnos tipos ya sea un usuario comun,admin o podemos hacer depende las edades tambien
int main(){

    int opcion;

cout <<"porfavor ingrese un numero correspondiente a su edad"<<endl;
cout <<"1. si es menor de 12 a 1 tendra un descuento del 30%"<<endl;
cout <<"2. si es menor de 13 a 16 tendra un descuento del 15%"<<endl;
cout <<"3. si es mayor de 17 a 18 tendra un descuento del 10%"<<endl;
cout <<"4. si es mayor de 19 a 21 tendra un descuento del 5%"<<endl;
cin>>opcion;
//sistema de switch para que funcione 
switch (opcion)
{
case 1: 
    cout <<"tu descuento es del 30%"<<endl;
    break;
    case 2: 
    cout <<"tu descuento es del 15%"<<endl;
    break;
    case 3:
    cout <<"tu descuento es del 10%"<<endl;
    break;
    case 4: 
    cout <<"tu descuento es del 5%"<<endl;
    break;
default: "opcion no valida";
    break;
}

    return 0;
}