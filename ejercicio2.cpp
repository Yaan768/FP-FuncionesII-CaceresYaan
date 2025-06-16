#include <iostream>
#include <cstdlib>  
#include <ctime>    
using namespace std;

// Función para generar y mostrar números aleatorios
void generarNumerosAleatorios(int cantidad, int maximo) {
    // hora actual aletoria
    srand(time(0));

    cout << "\nNumeros aleatorios generados:\n";
    for (int i = 0; i < cantidad; i++) {
        int numero = rand() % (maximo + 1); // Número entre 0 y maximo
        cout << numero << " ";
    }
    cout << endl;
}

int main() {
    int cantidad, maximo;
    //entrada
    cout << "Ingrese la cantidad de numeros aleatorios a generar: ";
    cin >> cantidad;

    cout << "Ingrese el valor maximo permitido: ";
    cin >> maximo;

    if (cantidad <= 0 || maximo < 0) {
        cout << "Error: cantidad y maximo deben ser positivos." << endl;//salida
    } else {
        generarNumerosAleatorios(cantidad, maximo);
    }

    return 0;
}

