/* Ejercicio : Cosntruya la clase Tiempo que contenga los siguientes atributos enteros,
hora, minutos y segundos, Haga que la clase contenga 2 constructores, el primero debe de contener 3 parametros Tiempo(int,int,int) y el segundo solo tendra un campo que seran los segundos y desensamble el numero entero largo en horas minutos y segundos */

#include <conio.h>
#include <iostream>
using namespace std;

class Tiempo
{
private:
    int horas, minutos, segundos;

public:
    Tiempo(int, int, int); //Cosntructor 1
    Tiempo(int);           //Constructor 2
    void mostrarTimempo();
};

Tiempo::Tiempo(int _horas, int _minutos, int _segundos) //Constructor 2
{
    horas = _horas;
    minutos = _minutos;
    segundos = _segundos;
}

Tiempo::Tiempo(int _tiempoSeg)   //Constructor 2
{
    horas = _tiempoSeg / 3600;
    _tiempoSeg %= 3600;
    minutos = _tiempoSeg / 60;
    segundos = _tiempoSeg % 60;
}

void Tiempo::mostrarTimempo(){
    cout << " La hora es: " << horas << ":" << minutos << ":" << segundos << endl;
}



int main()
{
    Tiempo horaActual(16, 23, 30);
    horaActual.mostrarTimempo();
    Tiempo haceUnaHora(55410);
    haceUnaHora.mostrarTimempo();

    getchar();
    return 0;
}
