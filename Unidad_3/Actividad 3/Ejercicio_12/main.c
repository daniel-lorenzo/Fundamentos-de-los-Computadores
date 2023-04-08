#include <stdio.h>
#include <stdlib.h>

#define PI (3.141592654)

int main()
{
    int opcion;
    float radio, circunf, area, volumen, altura;
    printf("Que parametro desea calcular?\n\n");
    printf("1. Circunferencia\n");
    printf("2. Area de un circulo\n");
    printf("3. Volumen de un cilindro\n\n");
    printf("Opcion: ");
    scanf("%i",&opcion);
    switch(opcion){
    case 1:
        printf("\nUsted ha seleccionado circunferencia.\n\n");
        printf("Ingrese el radio: ");
        scanf("%f",&radio);
        circunf = 2*PI*radio;
        printf("\nLa circunferencia del circulo es: %.2f\n\n",circunf);
        break;
    case 2:
        printf("\nUsted ha seleccionado area.\n\n");
        printf("Ingrese el radio: ");
        scanf("%f",&radio);
        area = PI*radio*radio;
        printf("\nEl area del circulo es: %.2f\n\n",area);
        break;
    case 3:
        printf("\nUsted ha seleccionado volumen.\n\n");
        printf("Ingrese el radio: ");
        scanf("%f",&radio);
        printf("Ingrese la altura: ");
        scanf("%f",&altura);
        volumen = PI*radio*radio*altura;
        printf("\nEl volumen del cilindro es: %.2f\n\n",volumen);
        break;
    default:
        printf("\nOpcion incorrecta. Bye-bye!\n\n");
        break;
    }
    return 0;
}

/**********************************************************
UNLZ - Facultad de Ingenieria
Asignatura: Fundamentos de los Computadores Digitales
Unidad 3 - Estructuras Selectivas
Alumno: Daniel Antonio Lorenzo
EJERCICIO 12:
Escribir un programa que permita mediante un menú calcular
el área de un círculo, la circunferencia de un círculo o
el volumen de un cilindro.

Ejemplo:

Qué parametro desea calcular?
1. Circunferencia
2. Area de un circulo
3. Volumen de un cilindro
**********************************************************/
