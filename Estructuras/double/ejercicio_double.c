#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void calcular_pi() {
    int n = 1000;
    double pi = 0.0;
    int signo = 1;

    for (int i = 0; i < n; i++) {
        double termino = signo * 1.0 / (2 * i + 1);
        pi += termino;
        signo *= -1;
    }

    pi *= 4;
    printf("1. Valor aproximado de pi usando %d términos: %.15f\n", n, pi);
}

void sumar_doubles() {
    double a, b, suma;

    printf("2. Ingresa el primer número: ");
    scanf("%lf", &a);

    printf("   Ingresa el segundo número: ");
    scanf("%lf", &b);

    suma = a + b;

    printf("   La suma de %.2lf y %.2lf es %.2lf\n", a, b, suma);
}

void calcular_promedio() {
    double num, suma = 0.0;
    int i;

    printf("3. Ingresa 5 números:\n");
    for (i = 1; i <= 5; i++) {
        printf("   Número %d: ", i);
        scanf("%lf", &num);
        suma += num;
    }

    double promedio = suma / 5.0;
    printf("   El promedio es: %.2lf\n", promedio);
}

void verificar_signo() {
    double numero;

    printf("4. Ingresa un número: ");
    scanf("%lf", &numero);

    if (numero > 0) {
        printf("   El número es positivo.\n");
    } else if (numero < 0) {
        printf("   El número es negativo.\n");
    } else {
        printf("   El número es cero.\n");
    }
}

void calcular_potencia() {
    double base, exponente, resultado;

    printf("5. Ingresa la base: ");
    scanf("%lf", &base);

    printf("   Ingresa el exponente: ");
    scanf("%lf", &exponente);

    resultado = pow(base, exponente);

    printf("   %.2lf elevado a %.2lf es %.5lf\n", base, exponente, resultado);
}

int main() {
    int opcion;

    do {
        printf("\n==============================\n");
        printf(" Menú de programas con double\n");
        printf("==============================\n");
        printf("1. Calcular PI con serie de Leibniz (1000 términos)\n");
        printf("2. Sumar dos números de doble precisión\n");
        printf("3. Calcular el promedio de 5 números\n");
        printf("4. Determinar si un número es positivo, negativo o cero\n");
        printf("5. Calcular potencia de base y exponente\n");
        printf("0. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        printf("\n");

        switch(opcion) {
            case 1:
                calcular_pi();
                break;
            case 2:
                sumar_doubles();
                break;
            case 3:
                calcular_promedio();
                break;
            case 4:
                verificar_signo();
                break;
            case 5:
                calcular_potencia();
                break;
            case 0:
                printf("Saliendo del programa.\n");
                break;
            default:
                printf("Opción no válida. Intente de nuevo.\n");
        }

    } while(opcion != 0);

    return 0;
}
