/* Ejercicio 5: Escriba una plantilla de funcion llamada despliegue() que despiliegue el valor del argumento que se le transmite cuando es invocada a funcion*/

/* / Para una función, ambas opciones son equivalentes
template <class identificador> definición_de_función;
template <typename identificador> definición_de_función; */

#include <iostream>
#include <conio.h>
using namespace std;

//----Prototipo de la funcion plantilla----//
template <typename T>
void despliegue(T dato);

//------------MAIN--------------//

int main()
{
    int dato1 = 4;
    float dato2 = 15.67;
    double dato3 = 678.3344;
    char dato4 = 'a';

    despliegue(dato1);
    despliegue(dato2);
    despliegue(dato3);
    despliegue(dato4);

    getch();
    return 0;
}

//-----------FUNCIONES DEF-------------//

template <typename T>
void despliegue(T dato)
{
    cout << "El dato es: " << dato << endl;
}
