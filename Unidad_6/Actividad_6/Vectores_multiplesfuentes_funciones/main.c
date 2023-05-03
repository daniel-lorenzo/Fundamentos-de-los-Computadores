#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "utilidades.h"

/*********************************************************************
    IMPORTANTE: no se puede modificar ni borrar nada del código
    entregado SOLO se puede agregar !!!
    Nombre: Daniel Antonio Lorenzo
    DNI: 26656129
    ENUNCIADO
    Se pide armar un programa que resuelva el siguiente enunciado.
    Implementar cada una de las opciones que da el menu de selectopt
    es decir
    1. Ingresar los datos al vector vdatos.
    2. Listar el vector con los datos cargados.
    3. Sumar todos los elementos del vector y mostrar el total en el main.
    4. Calcular el valor máximo del vector, mostrar valor y posición en la que se encuentra.

    PLUS:
    5. Suma los elementos de 3 en 3 del vector. Ej: si es de 10 elementos, suma la posición 0, 3, 6 y 9.
        El resultado se muestra en main
    6. Contar los elementos del vector sólo si el valor de la posición siguiente es mayor al actual.
        Ej: v[0] es 3 y v[1] es 2 esa conteo no se realiza y se sigue con el siguiente grupo v[1] compara v[2].
        El último elemento del vector compara contra el primero.
    7. Salir
*********************************************************************/

#define CANT 10
#define EXIT_SUCCESS 0

int main()
{
    int opt;
    bool seguir = true;
    bool datos_cargados = false;
    int vdatos[CANT];

    while(seguir==true)
    {
        opt = selectopt ();


        switch(opt)
        {
        case INGRESAR:
            ingresar_datos(vdatos,CANT);
            datos_cargados=true;
            break;
        case LISTAR:
            if(datos_cargados==true)
            {
                listar_datos(vdatos,CANT);
            }
            else
            {
                printf("Primero debe ingresar datos al vector \n");
            }
            break;
        case SUMAR_ELEMENTOS:
            if(datos_cargados==true)
            {
                printf("\nLa sumatoria es: %d\n",sumar_elementos(vdatos,CANT));
            }
            else
            {
                printf("Primero debe ingresar datos al vector \n");
            }
            break;
        case CALCULA_MAXIMO:
            if(datos_cargados==true)
            {
                calcula_maximo(vdatos,CANT);
            }
            else
            {
                printf("Primero debe ingresar datos al vector \n");
            }
            break;
        case SUMA_TRIPLE :
            if(datos_cargados==true)
            {
                printf("\nLa sumatoria de tres en tres: %d\n",sumar_elementos_triples(vdatos,CANT));
            }
            else
            {
                printf("Primero debe ingresar datos al vector \n");
            }
            break;
        case CONTAR_SIG_MAXIMO:
            if(datos_cargados==true)
            {
                printf("\nLa cantidad de maximos siguientes es: %d\n",contar_elementos_siguiente_mayor(vdatos,CANT));
            }
            else
            {
                printf("Primero debe ingresar datos al vector \n");
            }
            break;
        case SALIR:
            seguir = false;
            break;
        }
    }

    return EXIT_SUCCESS;
}
