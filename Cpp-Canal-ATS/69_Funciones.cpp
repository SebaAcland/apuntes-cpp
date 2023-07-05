//------ Devolver valores multiples-----//

#include "iostream"
#include "conio.h"
using namespace std;

//Prototipo e funciones
void calcular(int, int, int &, int &);

int main()
{

    int num1, num2, suma = 0, producto = 0;

    cout << "Digite 2 numeros :";
    cin >> num1 >> num2;

    calcular(num1, num2,suma,producto);

    cout << "El valor de la suma es :" << suma << endl;
    cout << "El valor de la multiplicacion es :" << producto << endl;

    getch();
    return 0;
}

void calcular(int num1_f, int num2_f, int &suma_f, int &producto_f)
{

    suma_f = num1_f + num2_f;
    producto_f = num1_f * num2_f;
}

// cambie los nombres de la variable en la funcion para dejar claro que no son las mismas declaradas en el main
// En el video estan iguales.
