#include<stdio.h>
#include<stdlib.h>

int main () {

    //Consigna
    /*. Leer una variable real PESO, e informar el estado de la persona de acuerdo con  la siguiente tabla:
        Peso < 40 “DELGADA”
        40 <= Peso < 70 “NORMAL”
        70 <= Peso < 90 “SOBREPESO”
        90 <= Peso “OBESA”
    */

    int peso;

    printf("Ingrese su peso: ");
    fflush(stdin);
    scanf("%d", &peso);


    if (peso < 40) {

        printf("\n\nUsted es una persona delgada\n\n");

    } else if (peso <= 40 || peso <= 70 ) {

        printf("\n\nUsted es una persona normal\n\n");

    } else if (peso >= 70 && peso <= 90) {

        printf("\n\nUsted es una persona con sobrepeso\n\n");

    } else if (peso >= 90) {

        printf("\n\nUsted es una persona obesa\n\n");

    }


    system ("pause");
}
