#include <stdio.h>
#include <stdlib.h>

int main()
{
    float imp_inic,porc,imp_desc;
    printf("Ingrese el importe inicial (En pesos): ");
    scanf(" %f%*c",&imp_inic);
    printf("Ingrese el porcentaje del descuento (15, 20, 25): ");
    scanf(" %f%*c",&porc);
    imp_desc = imp_inic - imp_inic*porc/100;
    printf("El importe que debera pagar es de: %.2f pesos\n",imp_desc);
    return 0;
}

/***************************************************************
UNLZ - Facultad de Ingenieria
Asignatura: Fundamentos de los Computadores Digitales
Unidad 2 - Introducción al Lenguaje C
Alumno: Daniel Antonio Lorenzo
EJERCICIO 6:
Escribir un programa que permita calcular el monto final de una
factura a la que se le aplica un determinado porcentaje de
descuento sobre otro determinado importe inicial.

*Ejemplo:

Ingrese el importe inicial (En pesos): 10000
Ingrese el porcentaje del descuento (15, 20, 25): 15

El importe que deberá pagar es de: 8500.00 pesos
**************************************************************/
