// ejercicio 7:
// intercambiar el valor de 2 vaiables utilizando paso de parametros por referencia

#include <iostream>
#include <conio.h>

using namespace std;

void intercambiar(int &, int &);

int main()
{
    int num1 = 10,
        num2 = 15;
    cout << "El valor de numero 1 es :" << num1 << endl;
    cout << "El valor de numero 2 es :" << num2 << endl;

    intercambiar(num1, num2);

    cout << "\nEl nuevo valor de numero 1 es :" << num1 << endl;
    cout << "El nuevo valor de numero 2 es :" << num2 << endl;

    getch();
    return 0;
}

void intercambiar(int &num1_f, int &num2_f)
{
    int aux;
    aux = num1_f;
    num1_f = num2_f;
    num2_f = aux;
}
