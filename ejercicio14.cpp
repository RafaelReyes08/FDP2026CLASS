#include <iostream>
using namespace std;
int main ()
{
    int numeros[5]={1,2,3,4,5}; //Declarar arreglo

    cout << "Contenido del arreglo: " << endl;

    for (int i=4; i>=0; i--)
    {
        cout <<"Elemento de la posicion " << i << ": " << numeros[i] << endl;
    }

    return 0;

    //Bien podria hacer: int n[5] y luego cin >> n[i] usando el iterador
}