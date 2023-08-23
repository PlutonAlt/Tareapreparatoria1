#include <stdio.h>

float celsiusToFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    int opcion;
    float temperatura;

    printf("Seleccione la conversion:\n");
    printf("1. Celsius a Fahrenheit\n");
    printf("2. Fahrenheit a Celsius\n");
    scanf("%d", &opcion);

    if (opcion == 1) {
        printf("Ingrese la temperatura en grados Celsius: ");
        scanf("%f", &temperatura);
        float fahrenheit = celsiusToFahrenheit(temperatura);
        printf("%.2f°C equivale a %.2f°F\n", temperatura, fahrenheit);
    } else if (opcion == 2) {
        printf("Ingrese la temperatura en grados Fahrenheit: ");
        scanf("%f", &temperatura);
        float celsius = fahrenheitToCelsius(temperatura);
        printf("%.2f°F equivale a %.2f°C\n", temperatura, celsius);
    } else {
        printf("Opcion no valida\n");
    }

    return 0;
}

