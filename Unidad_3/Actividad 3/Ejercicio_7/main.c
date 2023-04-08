#include <stdio.h>
#include <stdlib.h>

int main()
{
    int antig, categ;
    float sueldo;
    printf("Seleccione la categoria:\n");
    printf("(1) - Categoria A\n");
    printf("(2) - Categoria B\n");
    printf("(3) - Categoria C\n");
    printf("\nInserte la opción: ");
    scanf("%d",&categ);
    switch(categ){
    case 1:
        sueldo = 7500;
        break;
    case 2:
        sueldo = 9500;
        break;
    case 3:
        sueldo = 11500;
        break;
    default:
        printf("Opcion no válida\n");
    }
    printf("\nSeleccione la antiguedad:\n");
    printf("(1) - Menor a 5 años\n");
    printf("(2) - Entre 5 y 10 años\n");
    printf("(3) - Mayor o igual a 10 años\n");
    printf("\nInserte la opcion: ");
    scanf("%d",&antig);
    switch (antig){
    case 1:
        sueldo = sueldo + sueldo*5/100;
        break;
    case 2:
        sueldo = sueldo + sueldo*12/100;
        break;
    case 3:
        sueldo = sueldo + sueldo*20/100;
        break;
    default:
        printf("Opción no valida\n");
    }
    printf("\nEl sueldo definitivo es: $ %.2f.-\n",sueldo);
    return 0;
}

/**********************************************************
UNLZ - Facultad de Ingenieria
Asignatura: Fundamentos de los Computadores Digitales
Unidad 3 - Estructuras Selectivas
Alumno: Daniel Antonio Lorenzo
EJERCICIO 7:
Un empleado cobra según su categoría (Ej.: A - $7500)
y según su antigüedad tiene un aumento (Ej.: < 5 Años - 5%).
Escribir un programa que permita ingresar la categoría y la
antigüedad de un empleado y en base a esos datos muestre el
sueldo definitivo.

Categorías
A   $ 7500
B   $ 9500
C   $11500

Antigüedad
 < 5 años                5%
 >= 5 años < 10 años    12%
 >= 10 años             20%
***********************************************************/
