//Clase 3: Uso If else
#include <iostream>
#include <cmath>

using namespace std;
int main ()
{
    int y, x;

    // Solicita un numero al usuario

    cout << "Por favor, ingrese un numero: " << endl;
    cin >> y;

    // Calcular x= y^y
    x = pow(y, y);

    //Determina si x es par o impar
    if (x % 2 == 0)
    {
      cout << "El numero: " << x << " es par." << endl;
    }
    else
    {
      cout << "El numero: " << x << " es impar." << endl;
    }
      

    //Bloque adicional para determinar si y es negativo o positivo


    return 0;
}