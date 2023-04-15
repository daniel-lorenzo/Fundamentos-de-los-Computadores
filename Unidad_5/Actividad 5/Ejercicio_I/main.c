#include <stdio.h>
#include <stdlib.h>

int main()
{
    char vcincochar[5] = {'l','u','n','e','s'};
    int i;
    printf("La palabra del vector es: ");
    for(i=0;i<5;i++){
        printf("%c",vcincochar[i]);
    }
    printf("\n");
    return 0;
}

/****************************************************
UNLZ - Facultad de Ingenieria
Asignatura: Fundamentos de los Computadores Digitales
Unidad 5 - Estructuras Vectores y Matrices
Alumno: Daniel Antonio Lorenzo
EJERCICIO I
Cree un vector o cadena de caracteres denominado
“vcincochar”. Establece para cada uno de los índices
del vector que el contenido sean los caracteres l, u,
n, e, s. Acontinuación haz que se muestre por pantalla
el texto: “La palabra del vector es lunes”, donde lunes
estará definido letra a letra utilizando los elementos
del vector.
*****************************************************/
