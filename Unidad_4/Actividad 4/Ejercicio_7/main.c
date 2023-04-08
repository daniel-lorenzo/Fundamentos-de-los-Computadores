#include <stdio.h>
#include <stdlib.h>

int main()
{
    char caracter;
    int menor;
    menor = 999;
    do{
        printf("Ingrese un caracter: ");
        scanf(" %c%*c",&caracter);
        if(caracter<menor && caracter!='0'){
            menor = caracter;
        }
    }
    while(caracter!='0');
    printf("\nEl caracter ingresado con menor valor en ASCII es: %d [%c]\n",menor,menor);
    return 0;
}

/****************************************************
UNLZ - Facultad de Ingenieria
Asignatura: Fundamentos de los Computadores Digitales
Unidad 4 - Estructuras repetitivas
Alumno: Daniel Antonio Lorenzo
EJERCICIO 7:
Escribir un programa que permita ingresar caracteres
al usuario de a uno por vez. Cuando el usuario ingrese
el carácter ‘0’ (cero) el ingreso de datos se detenga
y que que programa muestre por pantalla el carácter
con el valor ASCII menor.
*****************************************************/
