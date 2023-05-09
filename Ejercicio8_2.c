#include <stdio.h>
#include <stdlib.h>

int main () {

    //Consigna
    // Completar el siguiente fragmento de programa, indicando  además que salidas produce para
    //los lotes de prueba dados:
    /*Lote de prueba: a=4
      Lote de prueba: a=9
      Lote de prueba: a=12
      Lote de prueba: a=35


    */

    int a;

    printf ("Ingrese valor de prueba: ");
    fflush(stdin);
    scanf("%d",&a);

    if (a % 2 == 0){

        printf("\n%d es multiplo de 2\n\n",a);


        if (a % 3 == 0) {

            printf("\ny también de 3 \n\n", a);

            printf("\npor lo tanto lo %d es multiplo de 6 \n\n", a);

            } else {

                printf("\npero no de 3 \n\n");
              }

    } else if (a % 3 == 0) {

         printf("\n%d es multiplo de 3 pero no de 2\n\n", a);

      } else {

         printf("\n%d no es multiplo de 2 ni de 3\n\n", a);
        }



    system ("pause");
}
