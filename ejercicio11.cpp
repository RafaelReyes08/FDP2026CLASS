//Clase de ciclo for
#include <iostream>
using namespace std;
int main ()
{
    int n=0, a;
    cout << "Podrias ingresar un numero que sera tu limite" << endl;
    cin >> a;
    for (int i=1; i<=a; i++)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}