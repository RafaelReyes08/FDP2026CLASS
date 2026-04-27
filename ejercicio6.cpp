//Clase 3: Uso If else
#include <iostream>
#include <cmath>

using namespace std;
int main ()
{
    float temperatura;

    //Se le pide al usuario una temperatura en Celsius

    cout << "Bienvenido al termometro digital" << endl;
    cout << "Por favor ingrese temperatura en grados Celsius" << endl;
    cin >> temperatura;


    //Verificar si la temperatura dicta si el agua esta fria, templada o caliente
    
    if (temperatura < 15)
    {
     cout << "Esta es la temperatura: " << temperatura << "C, el agua esta fria" << endl;
    }
    else if (temperatura > 30 && temperatura < 40)
    {
     cout << "Esta es la temperatura: " << temperatura << "C, el agua esta templada" << endl;
    }
    else
    {
     cout << "Esta es la temperatura: " << temperatura << "C, el agua esta caliente" << endl;
    }

 return 0;
}