// Escriba un programa que calule el valor de 1+2+3...+n

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int n, suma = 0;

    cout << "digite el nro de elementos: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        suma += i;
    }
    cout << "La suma es: " << suma << endl;

    getch();

    return 0;
}
