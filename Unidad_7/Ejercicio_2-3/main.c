#include <stdio.h>
#include <stdlib.h>

void orden (int *a, int *b);
int main()
{
    int a,b;
    printf("Ingrese dos numeros enteros:\n");
    printf("-> ");
    scanf("%d",&a);
    printf("-> ");
    scanf("%d",&b);

    orden(&a,&b);

    printf("\nOrdenamiento, menor a mayor: \n");
    printf(" %d \n",a);
    printf(" %d \n",b);
    return 0;
}

void orden (int *a, int *b)
{
    int aux;
    if(*a>*b)
    {
        aux = *a;
        *a = *b;
        *b = aux;
    }
}

/****************************************************
UNLZ - Facultad de Ingenieria
Asignatura: Fundamentos de los Computadores Digitales
Unidad 7 - Punteros, malloc, calloc
Alumno: Daniel Antonio Lorenzo
EJERCICIO 2
Escriba una función que reciba dos números enteros y 
los devuelva ordenados. Es decir que en el primer debe 
devolver el menor valor y en el 2do. el mayor.

EJERCICIO 3
Utilice la función anterior para leer pares de valores
e imprimirlos ordenados.
*****************************************************/
