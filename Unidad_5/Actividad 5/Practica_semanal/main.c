#include <stdio.h>
#include <stdlib.h>
#define T 3

struct registro{
    int legajo;
    int edad;
    float sueldo;
    char categoria;
};

int main()
{
    int i;
    struct registro reg[T];
    printf("Ingresar 3 registros de empleados:\n");
    for(i=0;i<T;i++){
        printf("nro. de legajo: ");
        scanf("%d",&reg[i].legajo);
        printf("edad: ");
        scanf("%d",&reg[i].edad);
        printf("sueldo: ");
        scanf("%f",&reg[i].sueldo);
        printf("categoria: ");
        scanf(" %c%*c",&reg[i].categoria);
    }
    printf("\nMuestra de datos:\n\n");
    for(i=0;i<T;i++){
        printf("\nEmpleado %d:\n",i+1);
        printf("nro. de legajo %d\n",reg[i].legajo);
        printf("edad: %d\n",reg[i].edad);
        printf("sueldo:  %.2f\n",reg[i].sueldo);
        printf("categoria: %c\n",reg[i].categoria);
    }
    return 0;
}

/******************************************************************************
UNLZ - Facultad de Ingenieria
Asignatura: Fundamentos de los Computadores Digitales
Unidad 5 - Estructuras Vectores y Matrices
Alumno: Daniel Antonio Lorenzo
Practica Semanal - Vectores de Estructuras
Ingresar 3 registros de empleados: (n.º de legajo, edad, sueldo y categoría), y
luego mostrar por pantalla los registros.

Se debe utilizar Vectores de Estructuras.

*******************************************************************************/
