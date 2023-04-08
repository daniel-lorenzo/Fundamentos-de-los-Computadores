#include <stdio.h>
#include <stdlib.h>

/** Detecta si el sistemas es Window u otro (Linux/Mac)  **/
#ifdef _WIN32
#define clrscr() system("cls")
#else
#define clrscr() system("clear")
#endif

int main()
{
    int num[3],i,max,min;
    clrscr();
    // Ingreso de datos
    printf("Ingrese tres numeros enteros distintos:\n");
    for(i=0;i<=2;i++){
        scanf("%d",&num[i]);
    }
    max = num[0];
    min = num[0];
    // Calculo
    for(i=1;i<=2;i++){
        if(num[i]>max){
            max = num[i];
        }
        if(num[i]<min){
            min = num[i];
        }
    }
    printf("Presione [ENTER] para continuar...\n");
    getchar();
    clrscr();
    // Salida
    printf("El mayor es: %d\n",max);
    printf("El menor es: %d\n",min);
    printf("\nPresione [ENTER] para salir...\n\n");
    getchar();
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
