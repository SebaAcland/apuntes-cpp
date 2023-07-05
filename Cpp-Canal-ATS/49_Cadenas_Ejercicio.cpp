/* Realize un programa que lea una cadena de caracteres de la entrada estandr y 
muestre en salida estandar cuantas ocurrencias de cada vocal existen en la cadena*/

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main()
{

    char frase[30];
    int vocal_a = 0,
        vocal_e = 0,
        vocal_i = 0,
        vocal_o = 0,
        vocal_u = 0;

    cout << "Digite una frase: ";
    cin.getline(frase, 30, '\n');

    for (int i = 0; i < 30; i++)
    {
        switch (frase[i])
        {
        case 'a':
            vocal_a++;
            break;
        case 'e':
            vocal_e++;
            break;
        case 'i':
            vocal_i++;
            break;
        case 'o':
            vocal_o++;
            break;
        case 'u':
            vocal_u++;
            break;
        }
    }
    cout << "vocal a : " << vocal_a << endl;
    cout << "vocal e : " << vocal_e << endl;
    cout << "vocal i : " << vocal_i << endl;
    cout << "Vocal o : " << vocal_o << endl;
    cout << "vocal u : " << vocal_u << endl;

    getch();
    return 0;
}