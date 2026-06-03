#include <iostream>
using namespace std;

int convertion (int n)
{
    return (n*9/5) + 32;
}
int main ()
{
    int a;
    cout << "Ingrese un grado en Celsius: " ;
    cin >> a;

    cout << "El grado en fahrenheit: " << convertion(a) << endl;
    return 0;
}

//return ayuda a devolver un valor y poder usar ese valor despues, la funciom void dara un valor que no se puede operar