#include <iostream>
using namespace std;

void comprobar(char r);

int main()
{
   typedef struct 
   {
      byte PORTA : 8;
      byte PORTB : 8;
      

   } Bit_1;

   Bit_1.PORTC = 45;


   char c;
   cout << "Pulsa un numero : ";
   cin >> c;
   comprobar(c);
   cout << "Programa terminado." << endl;
}

void comprobar(char r)
{
   int n = int(r);
   if (n >= 48 && n <= 57)
   {
      cout << "Correcto, la tecla pulsada es un numero." << endl;
   }
   else
   {
      cout << "Incorrecto, la tecla pulsada NO es un numero." << endl;
      cout << "Vuelve a pulsar un numero : ";
      cin >> r;
      comprobar(r);
   }
}