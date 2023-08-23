#include <stdio.h>

int main() {
    int numeroInicial, numeroFinal;

    printf("Ingrese el número inicial: ");
    scanf("%d", &numeroInicial);

    printf("Ingrese el número final: ");
    scanf("%d", &numeroFinal);

    int cantidadPares = 0;

    // Asegurarse de que el número inicial sea par (si es impar, sumar 1)
    if (numeroInicial % 2 != 0) {
        numeroInicial++;
    }

    // Contar números pares en el rango
    for (int i = numeroInicial; i <= numeroFinal; i += 2) {
        cantidadPares++;
    }

    printf("La cantidad de números pares en el rango es: %d\n", cantidadPares);

    return 0;
}

