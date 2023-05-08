#include <stdio.h>
#include <stdlib.h>

int main () {

    //consigna
    //Ingresar el Nombre, número de Matricula de un estudiante y tres notas
    //correspondientes a los parciales de una materia, calcular el promedio
    //e imprimir el Nombre, número de Matrícula y condición del alumno, considerando:
    //“APROBADO” con un promedio mayor o igual a 6.
    //“SOBRESALIENTE” si es igual o superior a 9.
    //“DESAPROBADO” en cualquier otro caso

    char nombre[20];
    int matricula;
    int nota1, nota2, nota3, promedio;


    printf ("\nIngrese el nombre y apellido del estudiante: ");
    fflush (stdin);
    scanf("%s", &nombre);

    printf ("\n\nIngrese el numero de matricula del estudiante: ");
    fflush (stdin);
    scanf("%d", &matricula);

    printf ("\n\nIngrese tres notas del estudiante: ");
    fflush (stdin);
    scanf("%d %d %d", &nota1, &nota2, &nota3);

    promedio = (nota1 + nota2 + nota3) / 3;

    printf ("\n\nEl nombre del estudiante es: %s", nombre);
    printf ("\n\nEl numero de matricula del estudiante es: %d", matricula);


    if (promedio >= 9) {

        printf("\n\nEl estudiante esta aprobado con un promedio sobresaliente de %d\n\n", promedio);

    } else if (promedio >= 6) {

        printf("\n\nEl estudiante esta aprobado con un promedio de %d\n\n", promedio);

      } else {

        printf("\n\nEl estudiante esta desaprobado con un promedio de %d\n\n", promedio);

        }

}
