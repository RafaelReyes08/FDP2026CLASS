#include <iostream>
using namespace std;
int main ()
{
    int dia=1;

    cout << "Bienvenido, ingrese un numero del 1 al 7 por favor\n";
    cin >> dia;

    switch (dia)
    {
        case 1: 
          cout << "El dia es Lunes";
          break;
        case 2: 
          cout << "El dia es Martes";
          break;
        case 3: 
          cout << "El dia es Miercoles";
          break;
        case 4: 
          cout << "El dia es Jueves";
          break;
        case 5: 
          cout << "El dia es Viernes";
          break;
        case 6: 
          cout << "El dia es Sabado";
          break;
        case 7: 
          cout << "El dia es Domingo";
          break;
        default:
          cout << "El numero ingresado no corresponde a un dia de la semana";
          break;
    }
    return 0;
}