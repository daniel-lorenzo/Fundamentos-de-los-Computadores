#include<stdio.h>
#include <stdlib.h>

int main() {
    int a;
    int b;
    int c;
    /* Ingresar tres valores enteros y luego mostrarlos */
    /* ordenados en forma creciente. */
    printf("Ingrese 1er valor:\n");
    scanf("%d",&a);
    printf("Ingrese 2do valor:\n");
    scanf("%d",&b);
    printf("Ingrese 3er valor:\n");
    scanf("%d",&c);
    if (a==b && b==c) {
        printf("Son todas iguales, no hay orden creciente.\n");
    } else {
        printf("En orden creciente:\n");
        if (a<b && a<c) {
            if (b<c) {
                printf("%d\n",a);
                printf("%d\n",b);
                printf("%d\n",c);
            } else {
                printf("%d\n",a);
                printf("%d\n",c);
                printf("%d\n",b);
            }
        } else {
            if (b<a && b<c) {
                if (a<c) {
                    printf("%d\n",b);
                    printf("%d\n",a);
                    printf("%d\n",c);
                } else {
                    printf("%d\n",b);
                    printf("%d\n",c);
                    printf("%d\n",a);
                }
            } else {
                if (a<b) {
                    printf("%d\n",c);
                    printf("%d\n",a);
                    printf("%d\n",b);
                } else {
                    printf("%d\n",c);
                    printf("%d\n",b);
                    printf("%d\n",a);
                }
            }
        }
    }
    return 0;
}

/**********************************************************
UNLZ - Facultad de Ingenieria
Asignatura: Fundamentos de los Computadores Digitales
Unidad 3 - Estructuras Selectivas
Alumno: Daniel Antonio Lorenzo
EJERCICIO 13:
Escribir un programa que permita ingresar tres números y
que los muestre de menor a mayor.
**********************************************************/
