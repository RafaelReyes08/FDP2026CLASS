#include <iostream>
using namespace std;

struct Estudiante {
    string nombre;
    string carnet;
    int edad;
};

void imprimirEstudiante(Estudiante e) { //e es como una variable que sirve para representar el struct y para llamarla se pone e."lo que quiero llamar"
    cout << "Nombre: " << e.nombre << endl; //aqui llamamos especificamente nombre y asi va con cada e.loquesea
    cout << "Carnet: " << e.carnet << endl;
    cout << "Edad: " << e.edad << endl;
}

int main() {
    Estudiante est = {"Juan Pérez", "20231234", 20};
    imprimirEstudiante(est);
    return 0;
}