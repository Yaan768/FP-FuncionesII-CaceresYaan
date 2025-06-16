#include <iostream>
#include <cmath> 
using namespace std;

// Función que calcula el área de un círculo dado su radio
double calcularAreaCirculo(double radio) {
    return M_PI * pow(radio, 2);
}

int main() {
    double radio;

    cout << "Ingrese el radio del circulo: ";
    cin >> radio;

    if (radio < 0) {
        cout << "El radio no puede ser negativo." << endl;
    } else {
        double area = calcularAreaCirculo(radio);
        cout << "El area del circulo es: " << area << endl;
    }

    return 0;
}


