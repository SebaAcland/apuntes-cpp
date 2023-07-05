/* Defina una estructura que indique el tiempo empleado por un ciclista en una etapa.
La esrtuctura debe tener tres campos: horas, minutos y segundos.
Escriba un programa que dado n etapas calcule el tiempo total empleado en correr todas las etapas.*/

#include <iostream>
#include <conio.h>

using namespace std;

struct tiempo
{
    int horas,
        minutos,
        segundos;

} Etapas[100];

int nEtapas,
    horasT = 0,
    minutosT = 0,
    segundosT = 0;

int main()
{

    cout << "Ingrese numero Etapas:\n";
    cin >> nEtapas;

    for (int i = 0; i < nEtapas; i++)
    {
        cout << "Ingrese Hora:";
        cin >> Etapas[i].horas;
        cout << "Ingrese minutos";
        cin >> Etapas[i].minutos;
        cout << "Ingrese segundos";
        cin >> Etapas[i].segundos;

        horasT += Etapas[i].horas;
        minutosT += Etapas[i].minutos;
        if (minutosT >= 60)
        {
            minutosT -= 60;
            horasT++;
        }

        segundosT += Etapas[i].segundos;
        if (segundosT >= 60)
        {
            segundosT -= 60;
            minutosT++;
        }
        cout << "\n";
    }
    
    cout << "\n Tiempo total empleado \n";
    cout << "Horas: " << horasT << endl;
    cout << "Minutos: " << minutosT << endl;
    cout << "Segundos: " << segundosT << endl;

    getch();
    return 0;
}