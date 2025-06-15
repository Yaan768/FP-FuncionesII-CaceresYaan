#include <iostream>
#include <cmath> 
using namespace std;

// Función que calcula la hipotenusa
double calcularHipotenusa(double cateto1, double cateto2) {
    return sqrt(pow(cateto1, 2) + pow(cateto2, 2));
}

int main() {
    double a, b;

    // Entrada 
    cout << "Ingrese el valor del primer cateto: ";
    cin >> a;
    cout << "Ingrese el valor del segundo cateto: ";
    cin >> b;

    // Proceso
    if (a <= 0 || b <= 0) {
        cout << "Los catetos deben ser mayores que cero." << endl;
        return 1;
    }

    //salida
    double hipotenusa = calcularHipotenusa(a, b);
    cout << "La hipotenusa es: " << hipotenusa << endl;

    return 0;
}

