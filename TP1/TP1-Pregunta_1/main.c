#include <stdio.h>

int main()
{
    int i;
    float num;
    i=1;
    scanf("%f",&num);
    do{
        if(i!=3){
            printf("El resultado de la multiplicacion por %d es: %.3f\n",i,i*num);
        }else{
            printf("Salteando la iteracion %d\n",i);
        }
        i++;
    }while(i<=4);

    return 0;
}

/******************************************************************************
UNLZ - Facultad de Ingenieria
Asignatura: Fundamentos de los Computadores Digitales
Unidad 4 - Estructuras repetitivas
Alumno: Daniel Antonio Lorenzo

--------------------------------------------------------------------------------
Tabajo Práctico Nro. 1 - Pregunta 1
--------------------------------------------------------------------------------
Realizar un programa en C que tome automáticamente distintos valores de entrada
y realize reiteradas multiplicaciones del número. Es decir, se lee
automáticamente un valor de entrada y este valor se multiplica por: 1, 2 y 4.
En cada iteración deberá mostrar el resultado.
Atención: en la tercer iteración no se realiza la multiplicación, se muestra el
mensaje "Salteando la iteracion 3". Los resultados deberán mostrarse con 3
decimales.

Nota: Resolver utilizando la estructura de repetición "Do While".

Por ejemplo:

--------------------------------------------------------------------------------
ENTRADA     RESULTADO
4           El resultado de la multiplicacion por 1 es: 4.000
            El resultado de la multiplicacion por 2 es: 8.000
            Salteando la iteracion 3
            El resultado de la multiplicacion por 3 es: 16.000
--------------------------------------------------------------------------------
Entrada     Resultado
5.25        El resultado de la multiplicacion por 1 es: 5.250
            El resultado de la multiplicacion por 2 es: 10.500
            Salteando la iteracion 3
            El resultado de la multiplicacion por 3 es: 21.000
--------------------------------------------------------------------------------
Entrada     Resultado
-8.33       El resultado de la multiplicacion por 1 es: -8.330
            El resultado de la multiplicacion por 2 es: -16.660
            Salteando la iteracion 3
            El resultado de la multiplicacion por 3 es: -33.320
--------------------------------------------------------------------------------
*******************************************************************************/
