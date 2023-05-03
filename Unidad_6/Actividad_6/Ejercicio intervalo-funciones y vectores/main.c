#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define TAM 6

void ingresar_datos (double vec[], int dim);
double sumatoria_total (double vec[], int dim);
void listar_datos (double vec[], int dim);
double sum_ponderada(double vec[], int dim);

int main()
{
    int opc;
    bool datos_cargados = false;
    int num1, num2;
    double resultado;
    double miVector[TAM];

    do
    {
        printf("\nMenu de Opciones:\n");
        printf("1) Ingresar datos\n");
        printf("2) Listar datos \n");
        printf("3) Sumatoria total \n");
        printf("4) Sumatoria ponderada \n");
        printf("5) Salir \n");
        printf("\nElija una opcion: ");
        scanf("%d",&opc);

        switch(opc)
        {
        case 1:
            ingresar_datos(miVector,TAM);
            datos_cargados=true;
            break;
        case 2:
            if(datos_cargados==true)
            {
                listar_datos(miVector,TAM);
            }
            else
            {
                printf("Primero debe ingresar datos al vector \n");
            }
            break;
        case 3:
            if(datos_cargados==true)
            {
                resultado = sumatoria_total(miVector,TAM);
                printf("\n###########################\n");
                printf("\nSumtatoria total: %.2lf\n",resultado);
                printf("\n###########################\n");
            }
            else
            {
                printf("Primero debe ingresar datos al vector \n");
            }
            break;
        case 4:
            if(datos_cargados==true)
            {
                resultado = sum_ponderada(miVector,TAM);
                printf("\n####################################\n");
                printf("\nSumatoria ponderada: %.2lf\n",resultado);
                printf("\n####################################\n");
            }
            else
            {
                printf("Primero debe ingresar datos al vector \n");
            }
            break;
        case 5:
            printf("Saliendo...\n\n");
            break;
        default:
            printf("Opcion incorrecta, vuelva a intentar\n\n");
        }
    }
    while(opc!=5);
    return 0;
}

void ingresar_datos(double vec[], int dim)
{
    int pos;
    for(pos = 0; pos < dim; pos++)
    {
        scanf("%lf",&vec[pos]);
    }
}

double sumatoria_total(double vec[], int dim)
{
    double resultado_sumatoria = 0;
    int pos;

    for(pos=0; pos < dim; pos++)
    {
        resultado_sumatoria += vec[pos];
    }
    return resultado_sumatoria;
}

void listar_datos(double vec[],int dim)
{
    int pos;
    for(pos = 0; pos < dim; pos++){
        printf("%.2lf \n",vec[pos]);
    }

}

double sum_ponderada(double vec[],int dim)
{
    double resultado_suma_pon = 0;
    int pos;

    for(pos = 0; pos < dim; pos++)
    {
        resultado_suma_pon += pos*vec[pos];
    }
    return resultado_suma_pon;
}

/********************************************************
UNLZ - Facultad de Ingenieria
Asignatura: Fundamentos de los Computadores Digitales
Unidad 6 - Funciones, ambito y alcance, multiples fuentes
--------------------------------------
Ejercicio Nro.1 - Funciones y Vectores
--------------------------------------
Se pide armar un programa que ofrezca al usuario un menú
con las siguientes opciones:
1. Ingresar datos: Para ello el programa dispondrá de un
vector de 6 posiciones de tipo double.
Para ello declarar y definir la función:
void ingresar_datos(double vec[], int dim);

2. Listar datos: genera un listado con los datos 
ingresados con posición y valor.
Para ello declarar y definir la función:
void listar_datos(double vec[], int dim);

3. Sumatoria total: informar la suma total de todos los
elementos del vector.
Para ello declarar y definir la función:
float sumatoria_total(double vec[], int dim);

4. Sumatoria ponderada: informa la sumatoria de cada 
elemento del vector multiplicado por la posición del mismo.
Para ello declarar y definir la función:
void sum_ponderada(double vec[], int dim);

5. Salir.

A tener en cuenta:
* Controlar si la opción es válida o no.
* Para las opciones 2, 3 y 4 es necesario controlar que
previamente se hayan cargado los datos.
********************************************************/
