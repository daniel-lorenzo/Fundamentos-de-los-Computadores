#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define M_PI (3.141592654)
int main()
{
    float longitud, area, radio;
    printf("Introduzca el radio de la circunferencia:\n");
    scanf(" %f%*c",&radio);
    longitud = 2*M_PI*radio;
    area = M_PI*pow(radio,2);
    printf("La longitud es: %.2f\n",longitud);
    printf("El area es: %.2f\n",area);
    return 0;
}

/****************************************************
UNLZ - Facultad de Ingenieria
Asignatura: Fundamentos de los Computadores Digitales
Unidad 2 - Introducción al Lenguaje C
Alumno: Daniel Antonio Lorenzo
EJERCICIO 3:
Escribir un programa que calcule la longitud y el
área de una circunferencia.
 L = 2*PI*r
 A = PI*r^2
*****************************************************/
