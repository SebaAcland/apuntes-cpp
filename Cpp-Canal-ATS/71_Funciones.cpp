/* Ejercicio 9: Escriba una funcion nombrada tiempo() que tenga un parametro en un número entero llamado totalSeg y tres parametros de referencia enteros nombrados horas, min, y seg. La funcion es convertir el número de segundos transmitido en un numero equivalente de horas, minutos y segundos.
*/

#include <conio.h>
#include <iostream>
using namespace std;

void tiempo(int totalSeg, int &horas, int &min, int &seg);

int main()
{
    int totalseg_M, horas_M, min_M, seg_M;

    cout << "Digite su numero total de segundos : ";
    cin >> totalseg_M;

    tiempo(totalseg_M, horas_M, min_M, seg_M);

    cout << "\nTiempo equivalente a la cantidad de segundos digitados" << endl;
    cout << "Horas: " << horas_M << endl;
    cout << "Min:" << min_M << endl;
    cout << "Seg:" << seg_M << endl;

    getchar();
    return 0;
}

void tiempo(int totalSeg, int &horas, int &min, int &seg)
{
    horas = totalSeg / 3600;
    totalSeg %= 3600; //totalSeg = totalSeg%3600;
    min = totalSeg / 60;
    seg = totalSeg % 60;
}

