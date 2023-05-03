#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int selectopt()
{
    int r;
    int cuantos;
    bool deboSeguir;
    do
    {
        printf ("\n\nIngrese una opcion\n");
        printf ("1 - Ingresar Datos al Vector\n");
        printf ("2 - Listar Vector\n");
        printf ("3 - Sumar elementos y mostrar total\n");
        printf ("4 - Calcular maximo\n");
        printf ("### PLUS ###\n");
        printf ("5 - Suma triples\n");
        printf ("6 - Contar solo si el proximo valor es mayor\n");
        printf ("7 - Salir\n");
        printf ("==> ");
        cuantos = scanf ("%d",&r);
        deboSeguir =  true;
        if (cuantos == 0)
            printf("Debe ingresar una opción\n");
        else
        {
            if ((r < 1) || (r > 7))
            {
                printf ("Las opciones son de 1 a 7 solamente\n");
            }
            else
            {
                deboSeguir = false;
            }
        }
    }
    while(deboSeguir==true);

    return r;
}

void ingresar_datos(int vector[], int dim)
{
    int pos;
    for(pos=0; pos<dim; pos++)
    {
        scanf("%d",&vector[pos]);
    }
}

void listar_datos(int vector[], int dim)
{
    int pos;
    for(pos=0; pos<dim; pos++)
    {
        printf("%d\n",vector[pos]);
    }
}

int sumar_elementos(int vector[], int dim)
{
    int suma=0,pos;
    for(pos=0; pos<dim; pos++)
    {
        suma += vector[pos];
    }
    return suma;
}

void calcula_maximo(int vector[], int dim)
{
    int max,pos;
    max = vector[0];
    for(pos=1; pos<dim; pos++)
    {
        if(vector[pos]>max)
        {
            max = vector[pos];
        }
    }
    printf("\nEl maximo es: %d\n",max);
}

int sumar_elementos_triples(int vector[], int dim)
{
    int sumaTrip=0,pos;
    for(pos=0; pos<dim; pos+=3)
    {
        sumaTrip += vector[pos];
    }
    return sumaTrip;
}

int contar_elementos_siguiente_mayor(int vector[], int dim)
{

    int pos, cont=0;

    for(pos=1; pos<dim; pos++)
    {
        if(vector[pos]>vector[pos-1])
        {
            cont++;
        }
    }
    if(vector[dim-1]>vector[0])
    {
        cont++;
    }
    return cont;
}



