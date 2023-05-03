#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int main()
{
    float *calif = malloc(TAM*sizeof(float));
    for(int i=0; i<TAM; i++)
    {
        scanf("%f",(calif+i));
    }
    printf("\nCalificaciones:\n");
    for(int i=0; i<TAM; i++)
    {
        printf("%d) %.2f\n",i,*(calif+i));
    }

    return 0;
}

/****************************************************
UNLZ - Facultad de Ingenieria
Asignatura: Fundamentos de los Computadores Digitales
Unidad 7 - Punteros, malloc, calloc
Alumno: Daniel Antonio Lorenzo
EJERCICIO 1
A partir de un arreglo de calificaciones de los alumnos
de primer grado, acceder y mostrar la información 
correspondiente a dicha lista mediante el acceso de un
apuntador.

Restricciones: Uso de punteros, estructuras de control 
repetitiva y el arreglo inicia con diez calificaciones.
Cree y rellene un vector con los primeros 50 números
enteros y luego muéstrelos en pantalla en orden
ascendente.
*****************************************************/
