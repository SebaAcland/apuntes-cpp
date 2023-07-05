/*


 */

#include <conio.h>
#include <iostream>
using namespace std;

class Fecha{
private:                    //Atributos
    int dia, mes, anio;

public:                     //Metodos;
    Fecha(int,int,int); //Constructor 1 
    Fecha(long);        //Constructor 2
    void mostrarFecha();

};

//Constructor 1 "2/4/2021"
Fecha::Fecha(int _dia, int _mes, int _anio){
    dia = _dia;
    mes = _mes;
    anio = _anio;
}
//Constructor 2 LEs paso por ej: 20210402;
Fecha::Fecha(long fecha){
    anio = int(fecha/10000); //Extraer anio;
    mes = int((fecha-anio*10000)/100); //Extraer mes;
    dia = int (fecha-anio*10000-mes*100); //Extraer dia;
}



void Fecha::mostrarFecha(){
    cout << "La Fecha es : "<< dia << "/" <<  mes << "/" << anio << endl;  
}


int main()
{

    Fecha hoy(9,1,2017);
    Fecha ayer(20170108);
    
    hoy.mostrarFecha();
    ayer.mostrarFecha();



    getchar();
    return 0;
}
