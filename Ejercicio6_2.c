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
    int nota1, nota2, nota3;


    printf ("Ingrese el nombre y apellido del estudiante: ");
    fflush (stdin);
    scanf("%s", &nombre);

    printf ("Ingrese el numero de matricula del estudiante: ");
    fflush (stdin);
    scanf("%d", &matricula);

    printf ("Ingrese tres notas del estudiante: ");
    fflush (stdin);
    scanf("%d %d %d", &nota1, &nota2, &nota3);




}
