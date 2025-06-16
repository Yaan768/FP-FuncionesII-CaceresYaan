#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Función para lanzar un dado (entre 1 y 6)
int lanzarDado() {
    return rand() % 6 + 1;
}

// Función para mostrar el estado del marcador
void mostrarMarcador(int jugador1, int jugador2) {
    cout << "Marcador -> Jugador 1: " << jugador1 << " | Jugador 2: " << jugador2 << "\n";
}

int main() {
    srand(time(0)); // Inicializar semilla aleatoria

    int puntosJugador1 = 0;
    int puntosJugador2 = 0;
    int ronda = 1;

    cout << "=== JUEGO DE DADOS POR TURNOS ===\n";
    cout << "Gana el primero en obtener 3 victorias.\n";
    //proceso 
    while (puntosJugador1 < 3 && puntosJugador2 < 3) {
        cout << "\n--- Ronda " << ronda << " ---\n";

        int dado1 = lanzarDado();
        int dado2 = lanzarDado();

        cout << "Jugador 1 lanza: " << dado1 << endl;
        cout << "Jugador 2 lanza: " << dado2 << endl;

        if (dado1 > dado2) {
            cout << "¡Jugador 1 gana la ronda!\n";
            puntosJugador1++;
        } else if (dado2 > dado1) {
            cout << "¡Jugador 2 gana la ronda!\n";
            puntosJugador2++;
        } else {
            cout << "Empate. No se asigna punto.\n";
        }

        mostrarMarcador(puntosJugador1, puntosJugador2);
        ronda++;
    }

    // Mostrar ganador final
    cout << "\n=== RESULTADO FINAL ===\n";
    if (puntosJugador1 == 3) {
        cout << " ¡Jugador 1 gana el juego!" << endl;//salida
    } else {
        cout << " ¡Jugador 2 gana el juego!" << endl;//salida
    }

    return 0;
}

