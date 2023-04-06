#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i,num,aux;
    i = 0;
    printf("Ingrese un numero entero en la entrada:\n");
    for(i=0;i<=3;i++)
    {
        printf("\n\nEntrada: ");
        scanf(" %d%*c",&num);
        aux = pow(num,2);
        printf("Salida:  %d",aux);
    }
    return 0;
}

/****************************************************
UNLZ - Facultad de Ingenieria
Asignatura: Fundamentos de los Computadores Digitales
Unidad 2 - Introducción al Lenguaje C
Alumno: Daniel Antonio Lorenzo
EJERCICIO 8:
Crear un programa que produzca las siguientes salidas
para las siguientes entradas:

Entradas    Salidas
1           1
2           4
3           9
4           16
*****************************************************/
