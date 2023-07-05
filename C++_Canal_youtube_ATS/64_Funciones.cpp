//--------------------Plantillas de Funcion
//--------------------Ejemplo sacar el valor absoluto de un numero.

#include <iostream>
#include <conio.h>

using namespace std;

//...Prototipo de Funcion
template <class TIPOD> // prefijo de la plantilla  
//La palabra clave class es equivalente a typename en este contexto. ej : template <typename T, typename U, typename V> class Foo{};
void mostrarAbs(TIPOD numero);

int main(){

    int num1 = -4;
    float num2 = -56.87;
    double num3 = -123.5678;

    mostrarAbs(num1);
    mostrarAbs(num2);
    mostrarAbs(num3);

    getch();
    return 0;
}

//Definicion de Funcion//

template <class TIPOD>
void mostrarAbs(TIPOD numero){
    if (numero < 0){
        numero *= -1;
    }
    cout << "El valor absoluto del numero es: " << numero << endl;
}




