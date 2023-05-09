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

    printf ("Ingrese valor de prueba");
    fflush(stdin)
    scanf("%d",&a);

    if (a / 2 == 0){

        printf("\n%d es múltiplo de 2\n",a);


        if (a / 3 == 0) {

            printf("\ny también de 3 \n", a);

            printf("por lo tanto lo %d es multiplo de 6 \n", a);

            } else {

                printf("pero no de 3 \n",);
              }

    } else if (a / 3 == 0) {

         printf("%d es múltiplo de 3 pero no de 2", a);

      } else {

         printf("%d no es múltiplo de 2 ni de 3", a);
        }

}
