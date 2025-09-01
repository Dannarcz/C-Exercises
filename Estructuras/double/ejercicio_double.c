
#include <stdio.h>

int main() {
    int n = 1000;              // Número de términos
    double pi = 0.0;           // Resultado aproximado de pi
    int signo = 1;             // Alterna entre +1 y -1

    for (int i = 0; i < n; i++) {
        double termino = signo * 1.0 / (2 * i + 1); // Calcula el término actual
        pi += termino;                             // Suma al total
        signo *= -1;                                // Cambia el signo
    }

    pi *= 4; // Multiplica por 4 al final para obtener el valor aproximado de π

    printf("Valor aproximado de pi usando %d terminos: %.15f\n", n, pi);

    return 0;
}
