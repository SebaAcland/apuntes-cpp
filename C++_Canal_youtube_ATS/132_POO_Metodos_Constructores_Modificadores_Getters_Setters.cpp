/* Metodos contructores y modificadores Getters y Setters.*/

#include <conio.h>
#include <iostream>
using namespace std;

class Punto
{
private:
    int x, y;

public:
    Punto();
    void setPunto(int, int); // Setter!!!
    int getPuntoX (); //Getter
    int getPuntoY (); // getter!!!
};
//_--------------------------------------------------
Punto::Punto(){
}
//-------------------------------------------------------
void Punto::setPunto(int _x, int _y) // Funcion creando un setter
{
    x = _x;
    y = _y;
}
//------------------------------------------------------------------
int Punto::getPuntoX (){
    return x;
}
int Punto::getPuntoY(){
    return y;
}
//-----------------------------------------------------------------------



int main()
{

    Punto punto1;
    // punto1.x = 15; --> Esto no se puede porque x e y es private: Para eso hice la funcion setpunto que como esta dentro de la clase si me perimite hacerlo . 
    punto1.setPunto(15,23);
    cout << punto1.getPuntoX() << endl; // Getter esto lo hacemos para obtener la x y la y que estan eb PRIVATE:
    cout << punto1.getPuntoY() << endl;


    getchar();
    return 0;
}