#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota,promedio,suma;
    int contador;

    suma = 0;
    contador = -1;
    printf("Ingreso de notas: \n");
    do
    {
    scanf("%f",&nota);
    suma = suma + nota;
    contador++;
    }
    while(nota!=0);
    promedio = suma/contador;
    printf("\n\nEl promedio es: %.2f\n",promedio);
    return 0;
}

/****************************************************
UNLZ - Facultad de Ingenieria
Asignatura: Fundamentos de los Computadores Digitales
Unidad 4 - Estructuras repetitivas
Alumno: Daniel Antonio Lorenzo
EJERCICIO 6:
Escribir un programa que permita al usuario ingresar
una serie de notas (valores entre 1 y 10) y que al
ingresar 0 (cero) la carga de notas se detenga y el
programa muestre el promedio de todas las notas
ingresadas.
*****************************************************/
