#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b,c,num;
    printf("Ingrese un numero entero de tres cifras: ");
    scanf(" %d%*c",&num);
    c = trunc(num/100);
    b = trunc((num-c*100)/10);
    a = num-c*100-b*10;
    printf("Cifras: \n");
    printf("%d\n",c);
    printf("%d\n",b);
    printf("%d\n",a);
    return 0;
}

/***************************************************************
UNLZ - Facultad de Ingenieria
Asignatura: Fundamentos de los Computadores Digitales
Unidad 2 - Introducción al Lenguaje C
Alumno: Daniel Antonio Lorenzo
EJERCICIO 7:
Escribir un programa para ingresar un valor numérico por
teclado que sea de tres cifras, y que el programa separe cada
una de ellas.

*Ejemplo:

Ingrese el numero de 3 cifras para separar: 582

La primer cifra es: 5
La segunda cifra es: 8
La tercer cifra es: 2
**************************************************************/
