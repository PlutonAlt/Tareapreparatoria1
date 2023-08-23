#include <stdio.h>

int CalFactorial(int numero) {
    if (numero == 0 || numero == 1) {
        return 1;
    } else {
        return numero * CalFactorial(numero - 1);
    }
}

int main() {
    int numero;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("El factorial no esta definido para numeros negativos.\n");
    } else {
        int factorial = CalFactorial(numero);
        printf("El factorial de %d es %d\n", numero, factorial);
    }

    return 0;
}

