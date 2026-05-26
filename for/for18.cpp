/*Dígito Más Grande en un Número
Solicita un número y encuentra el dígito más grande en él.*/
#include <iostream>
using namespace std;
int main(){
    int n;
    int mayor = 0; 
    int digito_actual = 0;

    cout << "porfavor ingresa un numero" << endl;
    cin >> n; 

    // utilizar for e if para poder hacer que tome los digitos
    for ( ; n > 0; n = n / 10) 
    {
        digito_actual = n % 10;
        
       if (digito_actual > mayor)
       {
        mayor = digito_actual;
       }
       
    }

    // siempre es para mostrar un resultado final 
    cout << "El digito mas grande es: " << mayor << endl;

    return 0;

}