#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Ingrese un numero entre 1 y 6\n>");
    scanf("%d",&num);
    switch(num){
    case 1:
        printf("Impar\n");
        break;
    case 2:
        printf("Par\n");
        break;
    case 3:
        printf("Impar\n");
        break;
    case 4:
        printf("Par\n");
        break;
    case 5:
        printf("Impar\n");
        break;
    case 6:
        printf("Par\n");
        break;
    default:
        printf("Error\n");
    }
    return 0;
}

/******************************************************
UNLZ - Facultad de Ingenieria
Asignatura: Fundamentos de los Computadores Digitales
Unidad 3 - Estructuras Selectivas
Alumno: Daniel Antonio Lorenzo
EJERCICIO 9:
Escribir un programa que pida el ingreso de un número.
Si el valor ingresado es 2,4 o 6 imprimir “Par”. Si el
valor ingresado es 1, 3 o 5 imprimir “Impar”. Para
cualquier otro número imprimir “Error”. El ejercicio
debe ser realizado utilizando la estructura Switch.
*******************************************************/
