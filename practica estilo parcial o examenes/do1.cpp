/*Solicita que el usuario ingrese una contraseña hasta que ingrese una que
contenga al menos 8 caracteres.     falle ya que tuve que ver IA =(*/

#include <iostream>
#include <string> // <-- IMPORTANTE: Necesaria para usar textos (strings)
using namespace std;

int main (){
    string contra; // Guardará la contraseña (letras, números, etc.)

    cout << "=== ACCESO A LA BOVEDA ===" << endl;
    
    do
    {
        // 1. Pedimos la contraseña DENTRO del bucle para que se repita si falla
        cout << "Por favor ingrese una contrasena (minimo 8 caracteres): ";
        cin >> contra;

        // 2. Evaluamos si es muy corta para mandarle un aviso al usuario
        if (contra.length() < 8)
        {
            cout << "Error: La contrasena es muy corta. Tiene solo " << contra.length() << " caracteres.\n" << endl;
        }

    // 3. El bucle se SEGUIRÁ REPETIENDO "mientras" la longitud sea menor a 8
    } while (contra.length() < 8); 

    // Si sale del bucle, significa que la condición del "while" ya es falsa (ya tiene 8 o más)
    cout << "\n¡Contrasena aceptada con exito! Accediendo a la boveda..." << endl;

    return 0;
}