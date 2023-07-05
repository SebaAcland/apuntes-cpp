/* TRANSMICION DE DIRECCIONES-

Ejemplo : Intercambiar el valor de 2 variables.

*/



#include <conio.h>
#include <iostream>
using namespace std;

void intercambio (float*, float*);

int main()
{

    float num1 = 20.8,
          num2 = 6.78;

    cout << " Primer numero : "<< num1 << endl;
    cout << " Segundo numero : "<< num2 << endl;

    intercambio(&num1, &num2);

    cout << " \n\n Despues del intercambio : \n\n ";
    cout << " Primer numero : "<< num1 << endl;
    cout << " Segundo numero : "<< num2 << endl;



    getchar();
    return 0;
}


void intercambio (float *dirNum1, float *dirNum2){
    float aux = *dirNum1;
    *dirNum1 = *dirNum2;
    *dirNum2 = aux;

}