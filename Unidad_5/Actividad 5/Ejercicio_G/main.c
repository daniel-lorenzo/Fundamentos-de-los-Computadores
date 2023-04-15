#include <stdio.h>
#include <stdlib.h>
#define DIM 5

int main()
{
    float vect[DIM],max;
    int i,pos;
    printf("Ingrese cinco numeros:\n");
    for(i = 0; i < DIM; i++){
        scanf("%f",&vect[i]);
    }
    max = vect[0];
    for(i = 1; i < DIM; i++){
        if(vect[i]>max){
            max = vect[i];
            pos = i;
        }
    }
    printf("\nEl maximo es: %.2f\nEn la posicion: %d\n",max,pos);
    return 0;
}

/****************************************************
UNLZ - Facultad de Ingenieria
Asignatura: Fundamentos de los Computadores Digitales
Unidad 5 - Estructuras Vectores y Matrices
Alumno: Daniel Antonio Lorenzo
EJERCICIO G
Cree un programa que pida 5 números por teclado, y
guárdelos en un vector. Luego indique cual es el valor
más alto y en qué posición del vector se encuentra.
*****************************************************/
