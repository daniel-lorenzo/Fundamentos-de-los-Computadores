#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c;
    printf("Ingrese las medidas de los lados de un triangulo:\n");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    if(a+b>c & a+c>b & b+c>a){
        printf("\nLas medidas corresponden a un triangulo.\n");
    }else{
        printf("\nLas medidas NO corresponden a un triangulo.\n");
    }
    return 0;
}

/******************************************************
UNLZ - Facultad de Ingenieria
Asignatura: Fundamentos de los Computadores Digitales
Unidad 3 - Estructuras Selectivas
Alumno: Daniel Antonio Lorenzo
EJERCICIO 8:
La ley de existencia de los triángulos plantea que es
requisito que la suma de los largos de dos de sus lados
sea mayor al largo del lado restante.
Escribir un programa que pida el ingreso de 3 valores,
y que verifique si pertenecen a un triángulo.
*******************************************************/
