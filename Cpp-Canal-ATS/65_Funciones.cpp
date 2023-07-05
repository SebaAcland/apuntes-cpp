/* Ejercicio 1:  Escriba una funcion llamada mult() que acepte 2 nros en punto flotante como parametros,
multiplique estos dos numeros y despliegue el resultado. */

#include <iostream>
#include <conio.h>
#define numero_flotante 123.3;

using namespace std;

//-----------------Prototipo Funciones----------------//
float mult(float x, float y);

int main()
{
    int numero =  numero_flotante ;
    float nro1, nro2, resultado = 0;

    cout << "Ingrese nro1 :";
    cin >> nro1;
    cout << "Ingrese nro2 :";
    cin >> nro2;
    resultado = mult(nro1, nro2);
    cout << "El resultado es:" << numero << endl;

    getch();
    return 0;
}

//----------------Definicion de funcion-----------------------//

float mult(float x, float y){
    //float result = x * y;
    // return result;
    
    return (x*y);
}



