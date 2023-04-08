#include <stdio.h>
#include <stdlib.h>

int main()
{
    float temp;
    // Ingreso de datos
    printf("Ingrese el valor de temperatura (°C):\n");
    scanf("%f",&temp);
    // Decisión
    if(temp>-0.5 & temp<=0.5)
    {
        printf("OK.\n");
    }
    else if(temp>0.5)
    {
        printf("La temperatura es positiva.\n");
    }
    else
    {
        printf("La temperatura en negativa.\n");
    }
    return 0;
}

/******************************************************
UNLZ - Facultad de Ingenieria
Asignatura: Fundamentos de los Computadores Digitales
Unidad 3 - Estructuras Selectivas
Alumno: Daniel Antonio Lorenzo
EJERCICIO 6:
El sistema de control de temperatura de una habitación
está diseñado para mantenerla alrededor de los 0°C. Se
requiere un programa para alertar cuando la temperatura
es positiva o cuando la temperatura es negativa. Por
ejemplo si el dato ingresado es 2 (muestra: "La
temperatura es positiva"); si el dato ingresado es -4.5
(muestra: "La temperatura es negativa").
*******************************************************/
