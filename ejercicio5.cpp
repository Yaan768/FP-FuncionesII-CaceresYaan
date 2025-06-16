#include <iostream>
#include <cmath>
using namespace std;

// Función que calcula las raíces
void calcularRaices(double a, double b, double c, double &x1, double &x2, bool &sonReales) {
    double discriminante = b * b - 4 * a * c;

    if (discriminante >= 0) {
        sonReales = true;
        x1 = (-b + sqrt(discriminante)) / (2 * a);
        x2 = (-b - sqrt(discriminante)) / (2 * a);
    } else {
        sonReales = false;
        x1 = -b / (2 * a); // Parte real
        x2 = sqrt(-discriminante) / (2 * a); // Parte imaginaria
    }
}

int main() {
    double a, b, c;
    double x1, x2;
    bool sonReales;
    
    //entrada
    cout << "Ingrese el coeficiente a: ";
    cin >> a;
    cout << "Ingrese el coeficiente b: ";
    cin >> b;
    cout << "Ingrese el coeficiente c: ";
    cin >> c;

    calcularRaices(a, b, c, x1, x2, sonReales);
    //proceso
    if (sonReales) {
        cout << "Las raíces son reales:" << endl;//salida
        cout << "x1 = " << x1 << endl;//salida
        cout << "x2 = " << x2 << endl;//salida
    } else {
        cout << "Las raíces son complejas:" << endl;//salida
        cout << "x1 = " << x1 << " + " << x2 << "i" << endl;//salida
        cout << "x2 = " << x1 << " - " << x2 << "i" << endl;//salida
    }

    return 0;
}

