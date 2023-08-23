#include <stdio.h>

int main() {
    int n;
    
    printf("Ingrese la cantidad de numeros: ");
    scanf("%d", &n);
    
    int numeros[n];
    
    // Leer los números ingresados por el usuario
    printf("Ingrese los %d numeros:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numeros[i]);
    }
    
    int opcion;
    printf("Elija una opcion:\n");
    printf("1 Calcular suma\n");
    printf("2 Calcular multiplicación\n");
    scanf("%d", &opcion);
    
    if (opcion == 1) {
        int suma = 0;
        for (int i = 0; i < n; i++) {
            suma += numeros[i];
        }
        printf("La suma de los numeros es: %d\n", suma);
    } else if (opcion == 2) {
        int multiplicacion = 1;
        for (int i = 0; i < n; i++) {
            multiplicacion *= numeros[i];
        }
        printf("La multiplicacion de los numeros es: %d\n", multiplicacion);
    } else {
        printf("Opcion no valida\n");
    }
    
    return 0;
}

