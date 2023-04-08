#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf("Ingrese un caracter:\n");
    scanf("%c",&c);
    switch(c){
    case 'a':
        printf("Es una vocal.\n");
        break;
    case 'e':
        printf("Es una vocal.\n");
        break;
    case 'i':
        printf("Es una vocal.\n");
        break;
    case 'o':
        printf("Es una vocal.\n");
        break;
    case 'u':
        printf("Es una vocal.\n");
        break;
    case 'A':
        printf("Es una vocal.\n");
        break;
    case 'E':
        printf("Es una vocal.\n");
        break;
    case 'I':
        printf("Es una vocal.\n");
        break;
    case 'O':
        printf("Es una vocal.\n");
        break;
    case 'U':
        printf("Es una vocal.\n");
        break;
    default:
        printf("Es una consonante.\n");
    }

    return 0;
}

/*********************************************************
UNLZ - Facultad de Ingenieria
Asignatura: Fundamentos de los Computadores Digitales
Unidad 3 - Estructuras Selectivas
Alumno: Daniel Antonio Lorenzo
EJERCICIO 10:
Escribir un programa que permita el ingreso de un carácter
y que imprima si es una vocal o una consonante.
*********************************************************/
