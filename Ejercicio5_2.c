#include <stdio.h>
#include <stdlib.h>

int main () {

    //consigna
    //Resolver los siguientes problemas mediante programas en C.
    //Escribir un programa que lea dos enteros que representan una fecha (mes y día del mes)
    //y escriba true si la fecha corresponde al día de navidad y false de lo contrario.
    //Ingresar tres valores decimales, calcular e imprimir el mínimo.
    //Ingresar tres datos de tipo carácter (letras), escribirlos ordenados alfabéticamente.

   /* int dia, mes;

    printf("Ingrese el mes de su nacimiento: ");
    fflush(stdin);
    scanf("%d", &mes);

    printf("\nIngrese el dia de su nacimiento: ");
    fflush(stdin);
    scanf("%d", &dia);


    if (dia == 24 & mes == 12) {

        printf("\n\ntrue\n\n");

    } else {

        printf("\n\nfalse\n\n");

    } */


    /*float a,b,c;

    printf ("Ingrese tres valores decimales: ");
    fflush (stdin);
    scanf ("%f %f %f", &a, &b, &c);

    if (a < b & a < c) {

        printf("\n%g\n", a);

    } else if (b<a & b<c) {

        printf ("\n%g\n", b);

    } else {

        printf("\n%g\n", c);

    } */

    char a,b,c;

    printf("Ingrese 3 caracteres: ");
    fflush (stdin);
    scanf("%c %c %c", &a, &b, &c);


    if (a > b) {

        char tempC = a;
        a = b;
        b = tempC;

    }

    if (b > c) {

        char tempC = b;
        b = c;
        c = tempC;

    }


    if (a > b) {

        char tempC = a;
        a = b;
        b = tempC;

    }

    printf("Los caracteres ordenados alfabeticamente son: %c %c %c\n", a, b, c);

    system ("pause");

}
