//--------Paso de parametros por referencia-----//

#include <conio.h>
#include <iostream>
using namespace std;

//Prototipo de funciones---//
void valNuevo(int &, int &);


//--------------MAIN--------------------//
int main()
{
    int num1, num2;

    cout << "Digite 2 numeros: ";
    cin >> num1 >> num2;

    valNuevo(num1, num2);

    cout << "El nuevo valor del primer numero es : " << num1<<endl;
    cout << "El nuevo valor del segundo numero es: " << num2<<endl;

    getchar();
    return 0;
}

void valNuevo(int &xnum, int &ynum) // direccion de memoria de num1 y num2..luego le cambio el valor.
{
    cout << "EL valor del primer numero es :" << xnum << endl;
    cout << "El valor del segundo numero es :" << ynum << endl;

    xnum = 89;
    ynum = 100;
}
