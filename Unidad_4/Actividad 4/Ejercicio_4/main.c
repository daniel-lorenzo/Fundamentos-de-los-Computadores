#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,suma;
    suma = 0;
    printf("Ingrese un numero entero positivo: ");
    scanf("%d",&num);
    for(i=1;i<num;i++){
        suma = suma + i;
    }
    printf("La suma es: %d\n",suma);
    return 0;
}

/****************************************************
UNLZ - Facultad de Ingenieria
Asignatura: Fundamentos de los Computadores Digitales
Unidad 4 - Estructuras repetitivas
Alumno: Daniel Antonio Lorenzo
EJERCICIO 4:
Escribir un programa que permita el ingreso de un
número entero positivo y que imprima el resultado de
la suma de todos los enteros positivos que le anteceden.
E.g.: Si el usuario ingresó 7 se deberá mostrar:
21 (1+2+3+4+5+6).
*****************************************************/
