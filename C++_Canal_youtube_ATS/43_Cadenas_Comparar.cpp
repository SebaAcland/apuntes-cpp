// Comparar cadenas de caracteres. Funcion strcmp() - strning.h

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{

    char palabra1[] = "Hola";
    char palabra2[] = "lola";
    if (strcmp(palabra2,palabra1) == 0) 
    {
        cout << "Ambas cadenas son iguales";
    }
    else
    {
        cout << "Ambas cadenas son diferentes";
    }

    getch();
    return 0;
}
/*-----------------return value	indicates
<0	the first character that does not match has a lower value in ptr1 than in ptr2
0	the contents of both strings are equal
>0	the first character that does not match has a greater value in ptr1 than in ptr2

*/