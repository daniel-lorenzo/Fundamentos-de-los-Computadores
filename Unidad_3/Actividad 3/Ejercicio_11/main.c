#include <stdio.h>
#include <stdlib.h>

int main()
{
    char varA;
    printf("Ingrese un caracter:\n");
    scanf("%c",&varA);
    if(varA>=48 & varA<=57){
        printf("Es un numero.\n");
    }
    if(varA>=54 & varA<=90){
        printf("Es una letra en mayuscula.\n");
    }
    if(varA>=97 & varA<=122){
        printf("Es una letra en minuscula.\n");
    }
    return 0;
}

/**********************************************************
UNLZ - Facultad de Ingenieria
Asignatura: Fundamentos de los Computadores Digitales
Unidad 3 - Estructuras Selectivas
Alumno: Daniel Antonio Lorenzo
EJERCICIO 11:
Escribir un programa que permita el ingreso de un carácter
y que imprima si está en “Mayúsculas”, “Minúsculas” o si
es un “número” o un “símbolo”. Ayudarse con la tabla ASCII.
**********************************************************/
