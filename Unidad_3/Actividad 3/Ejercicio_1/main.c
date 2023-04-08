#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;
    // Ingreso de datos
    printf("Ingrese dos numeros enteros distintos: \n");
    scanf("%d",&num1);
    scanf("%d",&num2);
    // Decisión
    if (num1<num2) {
        // Verdadero: imprime num1
        printf("El menor es: %d\n",num1);
        } else {
        // Falso: imprime num2
        printf("El menor es: %d\n",num2);
    }
    return 0;
}

/******************************************************
UNLZ - Facultad de Ingenieria
Asignatura: Fundamentos de los Computadores Digitales
Unidad 3 - Estructuras Selectivas
Alumno: Daniel Antonio Lorenzo
EJERCICIO 1:
Escribir un programa que pida el ingreso de dos números
enteros y que indique cuál es el menor de ellos. (Asuma
que los números son distintos).
*******************************************************/
