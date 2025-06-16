#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Función para convertir número a jugada
string jugadaTexto(int jugada) {
    switch (jugada) {
        case 1: return "Piedra";
        case 2: return "Papel";
        case 3: return "Tijeras";
        default: return "Desconocido";
    }
}

int main() {
    srand(time(0)); // Semilla para números aleatorios

    int usuario, computadora;
    int puntosUsuario = 0, puntosComputadora = 0;

    cout << "=== JUEGO: PIEDRA, PAPEL O TIJERAS ===" << endl;
    cout << "Primero en ganar 3 rondas sera el ganador." << endl;

    while (puntosUsuario < 3 && puntosComputadora < 3) {
        cout << "\nElige tu jugada (1: Piedra, 2: Papel, 3: Tijeras): ";
        cin >> usuario;

        // Validar entrada
        if (usuario < 1 || usuario > 3) {
            cout << "Jugada invalida. Intenta nuevamente." << endl;
            continue;
        }

        computadora = rand() % 3 + 1;

        cout << "Tu elegiste: " << jugadaTexto(usuario) << endl;
        cout << "La computadora eligio: " << jugadaTexto(computadora) << endl;

        // Comparar jugadas
        if (usuario == computadora) {
            cout << "¡Empate!" << endl;
        } else if ((usuario == 1 && computadora == 3) ||
                   (usuario == 2 && computadora == 1) ||
                   (usuario == 3 && computadora == 2)) {
            cout << "¡Ganaste esta ronda!" << endl;
            puntosUsuario++;
        } else {
            cout << "La computadora gana esta ronda." << endl;
            puntosComputadora++;
        }

        // Mostrar puntajes
        cout << "Marcador: Tu " << puntosUsuario << " - Computadora " << puntosComputadora << endl;
    }

    // Resultado final
    if (puntosUsuario == 3) {
        cout << "\n?? ¡Felicidades! Ganaste el juego." << endl;
    } else {
        cout << "\n?? La computadora gano el juego. ¡Suerte para la proxima!" << endl;
    }

    return 0;
}

