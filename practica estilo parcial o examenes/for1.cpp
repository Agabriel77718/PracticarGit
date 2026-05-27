/*Muestra la suma de los números impares entre 1 y 50.   tambien falle*/
#include <iostream>
using namespace std;

int main() {
    int suma = 0;

    // El bucle va desde 1 hasta 50
    for (int i = 1; i <= 50; i++) {
        if (i % 2 != 0) { // Si el residuo de i / 2 NO es 0, significa que es IMPAR
            suma = suma + i; // Lo acumulamos
        }
    }

    cout << "La suma de los numeros impares entre 1 y 50 es: " << suma << endl;
    return 0;
}