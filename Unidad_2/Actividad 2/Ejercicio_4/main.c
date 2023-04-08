#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lado1, lado2, lado3, area, volumen;
    printf("Introduzca las medidas del prisma\n\n");
    printf("Lado 1: ");
    scanf(" %f%*c",&lado1);
    printf("Lado 2: ");
    scanf(" %f%*c",&lado2);
    printf("Lado 3: ");
    scanf(" %f%*c",&lado3);
    area = 2*lado1*lado2 + 2*lado1*lado3 + 2*lado2*lado3;
    volumen = lado1*lado2*lado3;
    printf("\nEl area es: %.2f\n",area);
    printf("El volumen es: %.2f\n",volumen);

    return 0;
}

/****************************************************
UNLZ - Facultad de Ingenieria
Asignatura: Fundamentos de los Computadores Digitales
Unidad 2 - Introducción al Lenguaje C
Alumno: Daniel Antonio Lorenzo
EJERCICIO 4:
Escribir un programa que calcule el área y el volumen
de un prisma:

Area = (2*Lado1*Lado2)+(2*Lado1*Lado3)+(2*Lado2*Lado3)
Volumen = Lado1*Lado2*Lado3
*****************************************************/
