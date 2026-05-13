//Velocidad y Multa
//Pide la velocidad de un conductor. Si supera los 60 km/h, se le aplica una multa; si supera los 80 km/h, la multa es mayor
# include <iostream>
using namespace std;

int main () {
int velocidad;

cout <<"porfavor,igrese a la velocidad que el conductor estaba yendo por carretera"<<endl;
cin>>velocidad;

if (velocidad >=60)
cout <<"va a una velocidad no permitida, se le aplicara una multa "<<endl;
{
    if (velocidad >=80)
    cout <<"va a ecceso de velocidad, se le aplicara una multa aun mayor a lo comun or ecceso de velocidad"<<endl;

}

    if (velocidad<=59)
    cout <<"puede continuar con su camino"<<endl;


    return 0;
}