#include <iostream>
using namespace std;
int main ()
{
    float dinero=1;
    
    cout << "Bienvenido, ingrese una cantidad de dinero en dolares\n";
    cin >> dinero;

    int opcion;

    cout << "Estas son las opciones:\n";
    cout << "1. De USD a EUR\n";
    cout << "2. De USD a JPY\n";
    cout << "3. De USD a GBP\n";
    cout << "Ingrese un numero del 1 al 3 para elegir una opcion: \n";


    cin >> opcion;

    float conversion=0;


    switch (opcion)
    {
        case 1: 

          conversion = (dinero*0.86)/1;
          cout << "La conversion de USD a EUR es: " << conversion << endl;
          break;

        case 2: 

          conversion = (dinero*157.26)/1;
          cout << "La conversion de USD a JPY es: " << conversion << endl;
          break;

        case 3: 

          conversion = (dinero*0.74)/1;
          cout << "La conversion de USD a GBP es: " << conversion << endl;
          break;

        default:
          cout << "El numero ingresado no corresponde a una opcion";
          break;
    }
    return 0;
}