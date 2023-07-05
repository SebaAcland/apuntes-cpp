/*
Ejercicio 1 :
Construya una clase llamada rectangulo que tenga las siguientes atributos: Largo y Ancho;
y los siguientes metodos : Perimetro() y area();
 */

#include <conio.h>
#include <iostream>
using namespace std;
//####################################################
class Rectangulo
{
private:
    int largo,
        ancho;

public:
    Rectangulo(int, int);
    void Perimetro();
    void Area();
};

Rectangulo::Rectangulo(int _largo, int _ancho)
{
    largo = _largo;
    ancho = _ancho;
}
void Rectangulo::Perimetro()
{
    int _perimetro = (2 * largo) + (2 * ancho);
    cout << "El perimetro es : " << _perimetro << endl;
}

void Rectangulo::Area()
{
    int _area = largo * ancho;
    cout << " El area es : " << _area << endl;
}



//############################################################

int main()
{

    Rectangulo r1(11 , 34);
    r1.Perimetro();
    r1.Area();

    Rectangulo r2(23,22);
    r2.Perimetro();
    r2.Area();


    getchar();
    return 0;
}
