#include <stdio.h>
#include <string.h>

int main() {
    char cadena[50]; 

    printf("Ingrese una cadena de texto: ");
    fgets(cadena, sizeof(cadena), stdin);

    // Eliminar el salto de linea final 
    if (cadena[strlen(cadena) - 1] == '\n') {
        cadena[strlen(cadena) - 1] = '\0';
    }

    int longitud = strlen(cadena);

    printf("La cadena \"%s\" tiene %d caracteres.\n", cadena, longitud);

    return 0;
}

