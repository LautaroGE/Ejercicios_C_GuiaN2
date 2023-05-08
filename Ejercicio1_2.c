#include <stdio.h>
#include <stdlib.h>

int main () {

    //consigna
    //Escribir un programa C que determine si un número natural es par o impar.
    // Suponer que el valor ingresado es entero y positivo.

    int numero;

    printf("Ingrese un numero: ");
    fflush(stdin);
    scanf("%d", &numero);

    if (numero % 2 == 0) {

        printf("\nEl numero es par\n\n")

    }


    system ("pause");
}
