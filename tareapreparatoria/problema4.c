#include <stdio.h>
#include <math.h>

double calcularSeno(double x, int n) {
    double resultado = 0.0;
    int signo = 1;
    
    for (int i = 1; i <= n; i += 2) {
        resultado += signo * pow(x, i) / factorial(i);
        signo *= -1;
    }
    
    return resultado;
}

int factorial(int num) {
    int resultado = 1;
    for (int i = 1; i <= num; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    double angulo;
    int n;
    
    printf("Ingrese el angulo en radianes: ");
    scanf("%lf", &angulo);
    
    printf("Ingrese la cantidad de terminos en la serie de Taylor: ");
    scanf("%d", &n);
    
    double seno = calcularSeno(angulo, n);
    
    printf("El seno de %.2lf radianes es aproximadamente %.6lf\n", angulo, seno);
    
    return 0;
}

