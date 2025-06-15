#include <iostream>
#include <cmath> 
using namespace std;

// Función 
void calcularRaices(double a, double b, double c) {
    double discriminante = b * b - 4 * a * c;
    //Proceso
    if (a == 0) {
        cout << "El coeficiente 'a' no puede ser cero en una ecuación cuadrática." << endl;//salida
        return;
    }

    if (discriminante > 0) {
        double x1 = (-b + sqrt(discriminante)) / (2 * a);
        double x2 = (-b - sqrt(discriminante)) / (2 * a);
        cout << "Las raices son reales y diferentes: x1 = " << x1 << ", x2 = " << x2 << endl;//salida
    } else if (discriminante == 0) {
        double x = -b / (2 * a);
        cout << "Las raices son reales e iguales: x = " << x << endl;//salida
    } else {
        double parteReal = -b / (2 * a);
        double parteImaginaria = sqrt(-discriminante) / (2 * a);
        cout << "Las raices son complejas: " << endl;
        cout << "x1 = " << parteReal << " + " << parteImaginaria << "i" << endl;//salida
        cout << "x2 = " << parteReal << " - " << parteImaginaria << "i" << endl;//salida
    }
}
 //entrada
int main() {
    double a, b, c;

    cout << "Ingrese el coeficiente a: ";
    cin >> a;
    cout << "Ingrese el coeficiente b: ";
    cin >> b;
    cout << "Ingrese el coeficiente c: ";
    cin >> c;

    calcularRaices(a, b, c);

    return 0;
}

