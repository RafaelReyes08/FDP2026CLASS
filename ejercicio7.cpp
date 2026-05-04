//Clase 4: Uso del Switch
#include <iostream>
using namespace std;
int main () 
{
    int res, n;
    cout << "Hola, podrias ingresar un numero entero" << endl;
    cin >> n;
    res = n % 2;
    switch (res)
    {
        case 1: //Si quisiera poner un char, el valor tiene que ir en comillas simples
          cout << n << " Es un numero impar";

          break; //sirve para terminar el codigo aca si se cumplio la condicion

        case 0:
          cout << n << " Es un numero par";

          break;

        default:
          cout << "Datos incorrectos";

          break;
    }

    return 0;//return 1 sirve pa cerrar el codigo de una si detecta error
}