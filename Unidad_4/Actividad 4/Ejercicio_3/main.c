#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i;
    printf("Ingrese un numero entero positivo: ");
    scanf("%d",&num);
    for(i=1;i<num;i++){
        printf("%d\n",i);
    }
    return 0;
}

/****************************************************
UNLZ - Facultad de Ingenieria
Asignatura: Fundamentos de los Computadores Digitales
Unidad 4 - Estructuras repetitivas
Alumno: Daniel Antonio Lorenzo
EJERCICIO 3:
Escribir un programa que permita el ingreso de un
número entero positivo y que imprima por pantalla
todos los números enteros positivos menores que él.
E.g. Si el usuario ingresó 4 se deberá mostrar:
1, 2 y 3.
*****************************************************/
