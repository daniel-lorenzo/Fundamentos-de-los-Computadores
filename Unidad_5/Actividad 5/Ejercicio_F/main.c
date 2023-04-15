#include <stdio.h>
#include <stdlib.h>
#define DIM 10

int main()
{
    float vect[DIM],suma,promedio;
    int i;
    suma = 0;
    printf("Ingrese diez numeros:\n");
    for(i = 0; i < DIM; i++){
        scanf("%f",&vect[i]);
        suma = suma + vect[i];
    }
    promedio = suma/DIM;
    printf("\nEl promedio es: %.2f\n",promedio);
    return 0;
}

/****************************************************
UNLZ - Facultad de Ingenieria
Asignatura: Fundamentos de los Computadores Digitales
Unidad 5 - Estructuras Vectores y Matrices
Alumno: Daniel Antonio Lorenzo
EJERCICIO F
Cree un programa que pida 10 números por teclado, y
guárdelos en un vector.
Luego calcule el promedio de ellos.
*****************************************************/
