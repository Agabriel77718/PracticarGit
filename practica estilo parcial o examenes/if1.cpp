/*Solicita la edad y muestra si la persona es menor de edad, adulto o adulto mayor
(menor a 18, 18-59, 60+).
*/
#include <iostream>
using namespace std;

int main (){
int edad;

cout<<"Buenos dias, porfavor podrias ingresar tu edad"<<endl;
cin>>edad;

if (edad<=17)
{
    cout<<"Eres menor de edad";
}
else if (edad<=59)
{
     cout<<"eres mayor de edad";
}     
else  
{ 
      cout<<"Eres una persona avanzada de edad";
}

 return 0;
}
