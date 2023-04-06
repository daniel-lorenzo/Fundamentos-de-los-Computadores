#include <stdio.h>
#include <stdlib.h>

int main()
{
    float base, altura, area;
    printf("Calcula el area de un rectangulo\n");
    printf("Introduzca las medidas\n\n");
    printf("Base: ");
    scanf(" %f%*c",&base);
    printf("Altura: ");
    scanf(" %f%*c",&altura);
    area = base*altura;
    printf("\nEl area es: %.2f \n",area);
    return 0;
}

/****************************************************
UNLZ - Facultad de Ingenieria
Asignatura: Fundamentos de los Computadores Digitales
Unidad 2 - Introducción al Lenguaje C
Alumno: Daniel Antonio Lorenzo
EJERCICIO 1:
Escribir un programa que calcule el área de un
rectángulo.
*****************************************************/
