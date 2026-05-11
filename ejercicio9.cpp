#include <iostream>
using namespace std;
int main()
{
 int contador;
 cout << "Piensa en un numero para iniciar el contador: " << endl;
 cin >> contador;
 while (contador <=5)
    {
    cout << "Contador en While: " << contador << endl;
    contador++;
    }
    return 0;
}