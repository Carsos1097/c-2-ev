#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SALDO_INICIAL 100

// Función para realizar una apuesta
void apostar(int *saldo) {
    int apuesta;
    printf("Ingrese la cantidad que desea apostar: ");
    scanf("%d", &apuesta);

    if (apuesta > *saldo) {
        printf("No tiene suficiente saldo para realizar esa apuesta.\n");
    } else {
        *saldo -= apuesta;
        printf("Apuesta realizada. Su saldo actual es: %d\n", *saldo);
    }
}

// Función para jugar
void jugar(int *saldo) {
    int apuesta;
    int num_random = rand() % 2; // Genera un número aleatorio entre 0 y 1

    if (num_random == 0) {
        *saldo += 1; // Si el número es 0, el jugador gana y duplica su apuesta
        printf("¡Felicidades! Ganaste. Su saldo actual es: %d\n", *saldo);
    } else {
        printf("Lo siento, perdiste.\n");
    }
}

int main() {
    int saldo_jugador = SALDO_INICIAL;
    srand(time(NULL)); // Inicializa la semilla para la generación de números aleatorios

    printf("Bienvenido al casino Lisbona.\n");
    printf("Su saldo inicial es: %d\n", saldo_jugador);

    char opcion;
    do {
        printf("\nSeleccione una opción:\n");
        printf("1. Apostar\n");
        printf("2. Salir\n");
        printf("Opción: ");
        scanf(" %c", &opcion);

        switch (opcion) {
            case '1':
                apostar(&saldo_jugador);
                if (saldo_jugador > 0) {
                    jugar(&saldo_jugador);
                } else {
                    printf("¡Se acabó el juego! Su saldo es 0.\n");
                    opcion = '2'; // Termina el juego si el saldo llega a 0
                }
                break;
            case '2':
                printf("Gracias por jugar. Su saldo final es: %d\n", saldo_jugador);
                break;
            default:
                printf("Opción no válida. Por favor, seleccione una opción válida.\n");
                break;
        }
    } while (opcion != '2');

    return 0;
}

