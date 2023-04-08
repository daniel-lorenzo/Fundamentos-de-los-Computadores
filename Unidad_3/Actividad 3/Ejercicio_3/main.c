#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    // Ingreso de datos
    printf("Ingrese un numero entero\n");
    scanf("%d",&num);
    // Decisión
    if (num<1 || num>6)
    {
        printf("Error.\n");
    }
    else if (num%2==0)
    {
        printf("El numero es PAR\n");
    }
    else
    {
        printf("El numero es IMPAR\n");
    }

    return 0;
}

/******************************************************
UNLZ - Facultad de Ingenieria
Asignatura: Fundamentos de los Computadores Digitales
Unidad 3 - Estructuras Selectivas
Alumno: Daniel Antonio Lorenzo
EJERCICIO 3:
Escribir un programa que pida el ingreso de un número.
Si el valor ingresado es 2, 4 o 6 imprimir “Par”. Si el
valor ingresado es 1, 3 o 5 imprimir “Impar”. Para
cualquier otro número imprimir “Error”. Utilizar el
operador OR (||).
*******************************************************/
