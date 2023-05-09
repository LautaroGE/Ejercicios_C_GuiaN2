#include <stdio.h>
#include <stdlib.h>

int main () {

    //Consigna
    /*Una empresa de servicios de internet realiza la facturación de la siguiente manera para cada uno de sus tipos de abonados:

    1-Particular 2- Profesional 3- Comercial

    Tienen abonos de 300, 500 y 700 pesos respectivamente

    Además el valor del GB para cada categoría es:

    Particular 0-200 | 201-400 |401-1000 | más de 1000
                 0.5 |     0.7 |     1.0 |         1.2

    Profesional 0-250| 251-500 | 501-1000 | más de 1000
                  0.7|     1.1 |      1.3 |         1.5

    Comercial 0-300 | 301-600 | 601-1000 | más de 1000
                0.9 |     1.2 |      1.5 |         1.7


    Se pide: Ingresar categoría y cantidad de GB para un abonado y determinar el importe a pagar.
    */

    int opc, abono, valorgb;
    float gb, total;

    printf("\nBienvenido al servicio de facturacion.\n\n");
    fflush(stdin);

    printf("\nA continuacion, ingrese su categoria: \n\n");
    fflush(stdin);

    while (opc < 1 || opc > 3) {

        printf("\nPresione 1 si pertenece a la categoria Particular\n\n");
        fflush(stdin);
        printf("\nPresione 2 si pertenece a la categoria Profesional\n\n");
        fflush(stdin);
        printf("\nPresione 3 si pertenece a la categoria Comercial\n\n");
        fflush(stdin);

        scanf ("%d", &opc);
    }


    switch (opc){

        case 1:

            abono = 300;

            while (valorgb < 1 || valorgb > 4) {

                printf("\nPresione 1 si usted tiene una cantidad de gb de entre 0 y 200\n\n");
                fflush(stdin);
                printf("\nPresione 2 si usted tiene una cantidad de gb de entre 201 y 400\n\n");
                fflush(stdin);
                printf("\nPresione 3 si usted tiene una cantidad de gb de entre 401 y 1000\n\n");
                fflush(stdin);
                printf("\nPresione 4 si usted tiene una cantidad de gb de más de 1000\n\n");
                fflush(stdin);

                scanf ("%d", &valorgb);

            }

                if (valorgb == 1) {

                    gb = 0.5;
                    total = gb * abono;
                    printf("\n\nEl valor total a pagar es de: %g \n\n", total);

                } else if (valorgb == 2) {

                    gb = 0.7;
                    total = gb * abono;
                    printf("\n\nEl valor total a pagar es de: %g \n\n", total);


                  } else if (valorgb == 3) {

                        gb = 1.0;
                        total = gb * abono;
                        printf("\n\nEl valor total a pagar es de: %g \n\n", total);

                    } else if (valorgb == 4) {

                        gb = 1.2;
                        total = gb * abono;
                        printf("\n\nEl valor total a pagar es de: %g \n\n", total);

                      }




    } //fin del switch

     system ("pause");


}
