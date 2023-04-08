#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num;
    // Ingreso de datos
    printf("Ingrese un numero: \n");
    scanf("%f",&num);
    // Decisión
    if(num>0){
        printf("El numero es positivo\n");
    }
    else if(num<0){
            printf("El numero es negativo\n");
    }
    else
    {
            printf("El numero es cero\n");
    }
    return 0;
}

/******************************************************
UNLZ - Facultad de Ingenieria
Asignatura: Fundamentos de los Computadores Digitales
Unidad 3 - Estructuras Selectivas
Alumno: Daniel Antonio Lorenzo
EJERCICIO 2:
Escribir un programa que pida el ingreso de un número y
que indique si es positivo, negativo o cero.
*******************************************************/
