#include <stdio.h>
#include <math.h>

int main()
{
    int opcionMenu;
    float n1,n2,suma,resta,potencia,raiz,division;
    scanf("%d",&opcionMenu);
    scanf("%f",&n1);
    scanf("%f",&n2);
    switch(opcionMenu){
        case 1:
            suma = n1 + n2;
            printf("El resultado de la operacion es: %.2f\n",suma);
            break;
        case 2:
            resta = n1 - n2;
            printf("El resultado de la operacion es: %.2f\n",resta);
            break;
        case 3:
            potencia = pow(n1,n2);
            printf("El resultado de la operacion es: %.2f\n",potencia);
            break;
        case 4:
            raiz = sqrt(n1);
            printf("El resultado de la operacion es: %.2f\n",raiz);
            break;
        case 5:
            division = n1/n2;
            printf("El resultado de la operacion es: %.2f\n",division);
            break;
        default:
            printf("No existe la opcion de menu ingresada.\n");
            break;
    }
    return 0;
}

/******************************************************************************
UNLZ - Facultad de Ingenieria
Asignatura: Fundamentos de los Computadores Digitales
Unidad 4 - Estructuras repetitivas
Alumno: Daniel Antonio Lorenzo

--------------------------------------------------------------------------------
Tabajo Práctico Nro. 1 - Pregunta 3
--------------------------------------------------------------------------------
Elaborar un menú de programa utilizando enumeradores y switch. Dependiendo del
valor escaneado de forma automática el programa deberá imprimir distintos
mensajes y realizar distintas operaciones.

Las opciones de menú seberán der:
1. SUMA
2. RESTA
3. POTENCIA
4. RAIZ CUADRADA
5. DIVISION

Para las opciones 1, 2, 3 y 5 se reciben 2 valores de entrada. En estas opciones
se realizará la operación matemática que se ha seleccionado en el menú, la cual
utilizará el valor 1 y el valoe 2. Ej: si la opción es SUMA y los valores de
entrada son 10 y 5, deberá sumar 10 + 5 y mostrar el resultado. Si la opción de
menú es POTENCIA y los valores de entrada son 2 y 3, deberá hacer 2^3 (dos al
cubo) y mostrar el resultado.

Para la opción 4 del menú también se reciben dos valores pero el segundo valor
será 0, ya que no es necesario un segundo valor para una raíz cuadrada. En este
caso es RAIZ CUADRADA, entonces si mi valor de entrada es 9, deberá hacer la
raíz cuadrada de 9 y mostrar el resultado.

El mensaje de salida tendrá dos variantes:
1. El resultado de la operación es: X (mostrar el resultado con dos decimales)
2. No existe la opción de menú ingresada.

Es muy importante que la salida del texto se muestre tal cual se ve en el cuadro
"Resultado".
Es decir respetando mayúsculas, minúsculas, puntuación y los espacios.
Caso contrario el validador no funcionará.

También es importante observar los valores que figuran de "Entrada", simulan ser
valores ingresados por teclado, el cual se utilizará en funciones como scanf.

Siempre se respetará el orden, es decir, si tengo dos valores de entrada que son
N, 3, N y S, el primer scanf tomará N, el segundo scanf tomará 3, el tercero
tomará N y el último scanf tomará S.

Por ejemplo:
--------------------------------------------------------------------------------
PRUEBA          ENTRADA     RESULTADO
--------------------------------------------------------------------------------
SUMA            1           El resultado de la operacion es: 35.00
Valor 1:        15
Valor 2:        20
--------------------------------------------------------------------------------
RESTA           2           El resultado de la operacion es: 49.50
Valor 1:        50
Valor 2:        0.5
--------------------------------------------------------------------------------
POTENCIA        3           El resultado de la operacion es: 243.00
Valor 1:        3
Valor 2:        5
--------------------------------------------------------------------------------
RAIZ CUADRADA   4           El resultado de la operacion es: 3.16
Valor 1:        10
Valor 2:        0
--------------------------------------------------------------------------------
DIVISION        5           El resultado de la operacion es: 2.48
Valor 1:        56.10
Valor 2:        22.60
--------------------------------------------------------------------------------
*******************************************************************************/
