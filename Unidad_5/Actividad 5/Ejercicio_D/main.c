#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float vec[10],suma;
    suma = 0;
    printf("Ingrese 10 numeros;\n");
    for(i = 0; i < 10; i++){
        scanf("%f",&vec[i]);
    }
    for(i = 0; i < 10; i++){
        suma = suma + vec[i];
    }
    printf("\nLa suma es: %.2f\n",suma);
    return 0;
}

/****************************************************
UNLZ - Facultad de Ingenieria
Asignatura: Fundamentos de los Computadores Digitales
Unidad 5 - Estructuras Vectores y Matrices
Alumno: Daniel Antonio Lorenzo
EJERCICIO D
Cree un programa que pida 10 números por teclado, y
guárdelos en un vector.
Luego muestre el resultado de la suma de todos ellos.
*****************************************************/
