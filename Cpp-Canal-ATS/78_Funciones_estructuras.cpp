//Suma de dos numeros complejos--

#include <conio.h>
#include <iostream>
using namespace std;


    struct complejo
{
    float real, imaginaria;
} z1, z2;


//---------------------Prototipos---------------------
void pedirNumero();
complejo sumaCompleja(complejo z1_f, complejo z2_f);
void muestra(complejo xo);
//---------------------------------------------------

int main()
{
    pedirNumero();

    complejo num1 = sumaCompleja(z1, z2);

    muestra(num1);


    getchar();
    return 0;
}

void pedirNumero()
{
    cout << "Digite los datos para el primer numero complejo :" << endl;
    cout << "Parte real: ";
    cin >> z1.real;
    cout << "Parte imaginaria";
    cin >> z1.imaginaria;
    cout << "\nDigite los datos para el primer segundo complejo :" << endl;
    cout << "Parte real: ";
    cin >> z2.real;
    cout << "Parte imaginaria";
    cin >> z2.imaginaria;
}
complejo sumaCompleja(complejo z1_f, complejo z2_f)
{
    z1_f.real += z2_f.real;
    z1_f.imaginaria += z2_f.imaginaria;
    return z1_f;
}
void muestra(complejo xo)
{
    cout << "\n Resultado de la suma :" << xo.real << " , " << xo.imaginaria << endl;
}
