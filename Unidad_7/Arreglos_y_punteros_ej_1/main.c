#include <stdio.h>
#define TAM 10

int main()
{
    int estacion[TAM],suma=0;
    float prom;
    printf("Ingrese el numero de pasajeros:\n");
    for(int i=0; i<TAM; i++)
    {
        printf(" Estacion %c: ",(i+65));
        scanf("%d",&estacion[i]);
    }
    printf("\nPasajeros por estacion:\n\n");
    for(int i=0; i<TAM; i++)
    {
        printf(" En la estacion (%c) subieron %d pasajeros.\n",(i+65),*(estacion+i));
    }
    for(int i=0; i<TAM; i++)
    {
        suma = suma + estacion[i];
    }
    prom = (float)suma/TAM;
    printf("\nEl promedio de pasajeros por estacion es: %.2f \n",prom);
    printf("\nEstaciones que superan el promedio:\n");
    for(int i=0; i<TAM; i++)
    {
        if(prom<estacion[i])
        {
            printf(" Estacion (%c) con %d pasajeros.\n",(i+65),*(estacion+i));
        }
    }
    return 0;
}

/****************************************************
UNLZ - Facultad de Ingenieria
Asignatura: Fundamentos de los Computadores Digitales
Unidad 7 - Punteros, malloc, calloc
Alumno: Daniel Antonio Lorenzo
ARREGLOS Y PUNTEROS - EJERCICIO 1
a) Crear un vector “estacion” de 10 posiciones, que 
represente las distintas estaciones del recorrido de 
un tren.
b) Realizar un ciclo de 10 iteraciones, preguntando 
cuantos pasajeros subieron en cada estación, y 
guardando la respuesta en su respectiva ubicación 
del vector “estacion”.
c) Mediante otro ciclo de repetición mostrar el 
mensaje “En la estación (A) subieron (B) pasajeros”. 
Donde:
 (a) Representa el número de estación, que coincide 
 con la posición del vector
 (b) Es el valor guardado en la respectiva posición 
 del vector “estación”
 (d) Calcular el promedio de pasajeros que suben por 
 estación.
 (e) Calcular e indicar por pantalla que estaciones 
 superan el promedio.
*****************************************************/
