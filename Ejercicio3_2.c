#include <stdio.h>
#include <stdlib.h>

int main () {

    //consigna
    /* Resolver los siguientes Ítems: Escribir un programa que permita evaluar la siguiente función
    definida por tramos para un valor de x ingresado por teclado:

    f(x) = {5x + 2 si <=3
            -------------
            4x - 5 si x > 3
    */

    int x;

    printf ("Ingrese el valor de x: ");
    fflush(stdin);
    scanf("%d", &x);


    if (x <= 3) {

        x = (5 * x) + 2;
        printf("\n\nf(x) = %d\n\n", x);

    } else if (x > 3) {

        x = (4 * x) - 5;
        printf("\n\nf(x) = %d\n\n", x);

    }

    system ("pause");


}
