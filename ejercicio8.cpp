#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Función para generar un número aleatorio entre 1 y 5
int generarNumero() {
    return rand() % 5 + 1;
}

// Función que verifica si es escalera (como 2-3-4 o 4-3-2)
bool esEscalera(int a, int b, int c) {
    int maxNum = max(a, max(b, c));
    int minNum = min(a, min(b, c));
    int midNum = a + b + c - maxNum - minNum;
    return (maxNum - midNum == 1 && midNum - minNum == 1);
}

int main() {
    srand(time(0)); //números aleatorios
    int monedas = 100;
    int apuesta;
    char seguir;

    cout << "=== TRAGAMONEDAS SIMULADOR ===" << endl;

    do {
        cout << "\nTienes " << monedas << " monedas." << endl;
        cout << "¿Cuanto deseas apostar? (1 a 10): ";
        cin >> apuesta;

        // Validación de apuesta
        if (apuesta < 1 || apuesta > 10 || apuesta > monedas) {
            cout << "Apuesta inválida. Intenta de nuevo." << endl;
            continue;
        }

        // Generar los tres números
        int n1 = generarNumero();
        int n2 = generarNumero();
        int n3 = generarNumero();

        cout << "Tragamonedas: [" << n1 << "] [" << n2 << "] [" << n3 << "]" << endl;

        //proceso
        if (n1 == n2 && n2 == n3) {
            cout << "¡Tres iguales! Ganaste " << apuesta * 10 << " monedas." << endl;
            monedas += apuesta * 10;
        } else if (n1 == n2 || n2 == n3 || n1 == n3) {
            cout << "¡Dos iguales! Ganaste " << apuesta * 2 << " monedas." << endl;
            monedas += apuesta * 2;
        } else if (esEscalera(n1, n2, n3)) {
            cout << "¡Escalera! Ganaste " << apuesta * 5 << " monedas." << endl;
            monedas += apuesta * 5;
        } else {
            cout << "Perdiste " << apuesta << " monedas." << endl;
            monedas -= apuesta;
        }

        if (monedas <= 0) {
            cout << "\nTe quedaste sin monedas. ¡Fin del juego!" << endl;
            break;
        }

        cout << "\n¿Deseas seguir jugando? (s/n): ";
        cin >> seguir;

    } while (seguir == 's' || seguir == 'S');
    
    //salida
    cout << "\nTerminaste con " << monedas << " monedas." << endl;
    cout << "¡Gracias por jugar!" << endl;

    return 0;
}

