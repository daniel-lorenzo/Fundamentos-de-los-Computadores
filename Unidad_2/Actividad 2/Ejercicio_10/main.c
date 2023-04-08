#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m,b,int_x,int_y;
    printf("Ingrese la pendiente de la función: ");
    scanf(" %f%*c",&m);
    printf("Ingrese la ordenada al origen de la función: ");
    scanf(" %f%*c",&b);
    printf("Su función lineal quedo expresada de la siguiente forma: y = %.2fx + %.2f\n",m,b);
    int_x = -b/m;
    int_y = b;
    printf("La intersección con el eje x está dada por el punto: (%.2f , 0)\n",int_x);
    printf("La intersección con el eje y está dada por el punto: (0 , %.2f)\n",int_y);
    printf("\nIngrese [ENTER] para terminar....\n");
    getchar();
    return 0;
}

/****************************************************
UNLZ - Facultad de Ingenieria
Asignatura: Fundamentos de los Computadores Digitales
Unidad 2 - Introducción al Lenguaje C
Alumno: Daniel Antonio Lorenzo
EJERCICIO 10:
Una función lineal es una función polinómica de primer
grado, cuyo dominio y codominio son todos los números
reales. Su gráfico es una línea recta, por ende,
siempre corta al eje “x” y al eje “y”. Se define por
la ecuación f(x)=mx+b ó y=mx + b (llamada ecuación
canónica), en donde m es la pendiente de la recta y
b es la ordenada al origen.

Se pide diseñar un programa que encuentre los puntos
de intersección con el eje "x" e "y" de una función
lineal. En primer lugar, se le pedirá al usuario que
ingrese la pendiente de la función y luego la ordenada
al origen, para que la misma quede escrita de la
siguiente manera: y=mx+b (se debe imprimir en pantalla).
Por último, se mostrarán los puntos de
intersección de ambos ejes.
* Asumir que m es distinto de 0.
*****************************************************/
