#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,max,min;
    printf("Ingrese tres numeros enteros:\n");
    printf("> ");
    scanf("%d",&a);
    printf("> ");
    scanf("%d",&b);
    printf("> ");
    scanf("%d",&c);
    // Determina maximo
    if(a>b & a>c)
    {
        max = a;
    }
    else if(b>a & b>c)
    {
        max = b;
    }
    else
    {
        max = c;
    }
    // Determina minimo
    if(a<b & a<c)
    {
        min = a;
    }
    else if(b<a & b<c)
    {
        min = b;
    }
    else
    {
        min = c;
    }

    printf("\nEl maximo es: %d\n",max);
    printf("El minimo es: %d\n",min);
    return 0;
}

/******************************************************
UNLZ - Facultad de Ingenieria
Asignatura: Fundamentos de los Computadores Digitales
Unidad 3 - Estructuras Selectivas
Alumno: Daniel Antonio Lorenzo
EJERCICIO 4:
Escribir un programa que pida el ingreso de tres números
y que indique el menor y mayor de ellos. (Asuma que los
números son distintos).
*******************************************************/
