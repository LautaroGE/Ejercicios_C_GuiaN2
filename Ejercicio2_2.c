#include <stdio.h>
#include <stdlib.h>

int main () {

    //Consigna
    /* Para el siguiente programa C:

     int a,b;
     printf(“\nIngrese un numero entero\n”);
     scanf(“%d”,&a);

     printf(“\nIngrese otro número entero\n”);
     scanf(“%d”,&b);      printf(“\n”);

     if (a>b) {

        printf(“%d  %d” es mayor que”,a,b);

        } else if (a<b) {

                printf(“%d %d”,”’es mayor que”,b,a);

          } else {

                printf(“%d , %d”,”’es igual a”,a,b);
            }

      printf(“\n”); system(“pause”); …………………..

A - Explique que hace este programa y escríbalo como un comentario.

rta: El programa nos pide dos numeros enteros. Luego los compara, si a es menor que b, a menor que b o a igual que b, el programa
imprime un mensaje en la pantalla con la respuesta correspondiente.

B - Compárelo con el programa obtenido en el ejercicio 1 ¿Cuál es la diferencia?
En este ejercicio estamos comparando dos valores para saber si uno es mayor, menor o igual al otro.
En el ejercicio uno, usamos el if para averiguar el resto de una division y saber si teniamos un numero par o impar.

C - ¿Qué pasa si se ingresan números reales o caracteres en lugar de enteros?
El programa se rompe y no funcionaria o funcionaria con errores

E - Modificarlo para que solo decida si a = b o a != b.

*/

     int a,b;
     printf("\nIngrese un numero entero: ");
     scanf("%d",&a);

     printf("\nIngrese otro número entero: ");
     scanf("%d",&b);

     printf("\n");

     if (a==b) {

        printf("%d es igual que %d",a,b);

        } else if (a != b) {

                printf("%d no es igual que %d\n\n",a,b);
        }

      printf("\n");


    system("pause");


}
