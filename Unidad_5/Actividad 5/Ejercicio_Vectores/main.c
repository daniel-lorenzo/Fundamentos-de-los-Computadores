#include <stdio.h>
#include <stdlib.h>

#define NUM 10

int main()
{
    int estacion[NUM],i,suma;
    float promedio;
    suma = 0;
    printf("Ingreso de pasajeros:\n");
    for(i=0;i<NUM;i++){
        printf(" Estacion %d: ",i);
        scanf("%d",&estacion[i]);
    }
    printf("\nMuestra de datos:\n");
    for(i=0;i<NUM;i++){
        printf(" En la estacion %d subieron %d pasajeros.\n",i,estacion[i]);
        suma = suma + estacion[i];
    }
    promedio = (float)suma/NUM;
    printf("\nPromedio de pasajeros que suben por estacion: %.2f\n\n",promedio);
    printf("Estaciones que superan el promedio:\n");
    for(i=0;i<NUM;i++){
        if(estacion[i]>promedio){
            printf(" Estacion: %d\n",i);
        }
    }

    return 0;
}

/******************************************************************************
UNLZ - Facultad de Ingenieria
Asignatura: Fundamentos de los Computadores Digitales
Unidad 5 - Estructuras Vectores y Matrices
Alumno: Daniel Antonio Lorenzo
EJERCICIO VECTORES
a) Crear un vector "estación" de 10 posiciones, que represente las distintas
   estaciones del recorrido de un tren.
b) Realizar un ciclo de 10 iteraciones, preguntando cuantos pasajeros subieron
   en cada estación, y guardando la respuesta en su respectiva ubicación del
   vector "estación".
c) Mediante otro ciclo de repetición mostrar el mensaje "En la estación (A)
   subieron (B) pasajeros". Donde:
   (A) Representa el número de estación, que coincide con la posición del vector
   (B) Es el valor guarddo en la respectiva posición del vector "estación"
d) Calcular el promedio de pasajeros que suben por estación.
e) Calcular e indicar por pantalla que estaciones superan el promedio.

*******************************************************************************/
