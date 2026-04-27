//Clase 3: Uso If else
#include <iostream>
#include <cmath>

using namespace std;
int main ()
{
    float pi=3.1416, r;
    int area;

    //Se le pide al usuario un radio

    cout << "Bienvenido a la calculadora de radio" << endl;
    cout << "Por favor, ingrese el radio" << endl;
    cin >> r;

    //Valor del area

    area= pi*(pow(r, 2));
    cout << area << endl;

    //Verificar si el area resultante es par o impar
    
    if (area % 2 == 0)
    {
     cout << "Esta es el area: " << area << " Por lo tanto es par" << endl;
    }
    else
    {
     cout << "Esta es el area: " << area<< " Por lo tanto es impar" << endl;
    }

 return 0;
}