#include <stdio.h>
#include <stdlib.h>

int main () {

    //Consigna
    // Dadas las componentes de un punto en el plano,
    //determinar a qué cuadrante corresponde teniendo en cuenta que se pueden encontrar sobre los ejes o en el origen.

    int x,y;

    printf ("\nIngrese los valores de X y Y: ");
    fflush(stdin);
    scanf("%d %d", &x, &y);

    if (x == 0 & y == 0){

        printf ("\nEl punto se encuentra en el origen\n");

    } else if (x == 0 || y == 0) {

        printf ("\nEl punto se encuentra en uno de los ejes\n");

      }

    if (x > 0 & y > 0) {

        printf ("\nEl punto se encuentra en el primer cuadrante\n");

    } else if (x < 0 & y > 0) {

        printf ("\nEl punto se encuentra en el segundo cuadrante\n");

    } else if (x < 0 & y < 0) {

        printf ("\nEl punto se encuentra en el tercer cuadrante\n");

    } else if (x > 0 & y < 0) {

        printf ("\nEl punto se encuentra en el cuarto cuadrante\n");

    }


}
