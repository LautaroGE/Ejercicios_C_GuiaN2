#include <stdio.h>
#include <stdlib.h>



int main () {


    //Consigna
    /* Reescribir el siguiente programa utilizando la sentencia SWITCH y BREAK sin alterar sus salidas.
    #define x 2
    #define y 3
    #define z 4

    int m;
    scanf(“%d”,&m)

    If (m==x) {
    printf(“El valor de %d es igual a %d”,m,x);

    } else  If (m==y) {

        printf(“El valor de %d es igual a %d”,m,y);

      } else If (m==z) {

            printf(“El valor de %d es igual a %d” ,m,z);

        } else {

            printf(“El valor de %d no coincide con ninguno de los ingresados”,m);
          }

    */

    #define x 2
    #define y 3
    #define z 4

    int m;

    printf ("Ingresa el valor de m: ");
    fflush (stdin);
    scanf("%d", &m);

    switch (m) {

        case x:
            printf("\n\nEl valor de %d es igual a %d\n\n", m, x);
            break;

        case y:
            printf("\n\nEl valor de %d es igual a %d\n\n", m, y);
            break;

        case z:
            printf("\n\nEl valor de %d es igual a %d\n\n", m, z);
            break;

        default:
            printf("\n\nEl valor de %d no coincide con ninguno de los ingresados\n\n", m);
            break;
    }

    system ("pause");
}
