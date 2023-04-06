#include <stdio.h>
#include <stdlib.h>

int main()
{
    float distancia,tiempo,velocidad;
    printf("Ingrese la distancia recorrida por el proyectil (En metros): ");
    scanf(" %f%*c",&distancia);
    printf("Ingrese el tiempo que tardo (en segundos): ");
    scanf(" %f%*c",&tiempo);
    velocidad = distancia/tiempo;
    printf("\nLa velocidad media del proyectil fue: %.2f m/s\n",velocidad);
    return 0;
}

/***************************************************************
UNLZ - Facultad de Ingenieria
Asignatura: Fundamentos de los Computadores Digitales
Unidad 2 - Introducción al Lenguaje C
Alumno: Daniel Antonio Lorenzo
EJERCICIO 5:
Escribir un programa que calcule la velocidad media de un
proyectil, sabiendo la cantidad de kilómetros que recorrió y
el tiempo que demoró en hacerlo.

*Ejemplo:

Ingrese la distancia recorrida por el proyectil (En metros): 80
Ingrese el tiempo que tardo (en segundos): 13

La velocidad media del proyectil fue: 6.15 m/s
**************************************************************/
