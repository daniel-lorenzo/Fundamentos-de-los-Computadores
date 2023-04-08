#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num;
    // Ingreso de datos
    printf("Ingrese un numero entre 0 y 10:\n");
    scanf("%f",&num);
    // Decisión
    if(num<0 || num>10){
        printf("Falso.\n\n");
    }else{
        printf("Verdadero.\n\n");
    }
    return 0;
}

/******************************************************
UNLZ - Facultad de Ingenieria
Asignatura: Fundamentos de los Computadores Digitales
Unidad 3 - Estructuras Selectivas
Alumno: Daniel Antonio Lorenzo
EJERCICIO 5:
Escribir un programa que pida el ingreso de un número.
Si el número está entre 0 y 10. Imprimir “verdadero”.
Si el número es mayor a 10 y menor que 0 imprimir falso.
*******************************************************/
