#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroElementos,suma=0;
    float prom;

    printf("Ingrese el numero de estaciones: ");
    scanf("%d",&numeroElementos);

    int *estacion = malloc(numeroElementos*sizeof(int));

    printf("\nIngrese el numero de pasajeros:\n");
    for(int i=0; i<numeroElementos; i++)
    {
        printf(" Estacion %c: ",(i+65));
        scanf("%d",(estacion+i));
    }

    printf("\nPasajeros por estacion:\n");

    for(int i=0; i<numeroElementos; i++)
    {
        printf(" En la estacion (%c) subieron %d pasajeros.\n",(i+65),
				*(estacion+i));
    }

    for(int i=0; i<numeroElementos; i++)
    {
        suma = suma + *(estacion+i);
    }

    prom = (float)suma/numeroElementos;

    printf("\nEl promedio de pasajeros por estacion es: %.2f \n",prom);
    printf("\nEstaciones que superan el promedio:\n");

    for(int i=0; i<numeroElementos; i++)
    {
        if(prom<*(estacion+i))
        {
            printf(" Estacion (%c) con %d pasajeros.\n",(i+65),*(estacion+i));
        }
    }

    free(estacion);

    return 0;
}

/****************************************************
UNLZ - Facultad de Ingenieria
Asignatura: Fundamentos de los Computadores Digitales
Unidad 7 - Punteros, malloc, calloc
Alumno: Daniel Antonio Lorenzo
ARREGLOS Y PUNTEROS - EJERCICIO 1
En muchas ocasiones no sabremos a priori el espacio 
que vamos a necesitar para nuestras estructuras de 
datos o vectores. Esto deberá decidirse en tiempo de
ejecución utilizando la función malloc. Para ello 
crearemos un programa que resuelva lo mismo que el 
ejercicio 1, pero que:
a) Le pregunte al usuario cuantos elementos quiere 
ingresar. Guardar la respuesta en una variable int 
llamada “numeroElementos”.
b) Cree un puntero a int llamado “estacion”:
int *estacion;
y le asigne la cantidad de memoria necesaria según 
la cantidad de elementos elegidos por el usuario. 
Para eso usar:
estacion = (int*)malloc(numeroElementos*sizeof(int));
c) Realice los apartados b) y c) del ejercicio anterior.
*****************************************************/
