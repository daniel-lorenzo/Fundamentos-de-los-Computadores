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
    int edad,i,opcion,n,j,a,m;
    n = 0;
    j = 0;
    a = 0;
    m = 0;

    do
    {
        clrscr();
        printf("Menu:\n");
        printf("1. Ingresar edad de persona.\n");
        printf("2. Mostrar Cantidad de personas menores a 18 a#os.\n");
        printf("3. Mostrar Cantidad de personas entre 18 y 30 a#os.\n");
        printf("4. Mostrar Cantidad de personas entre 30 y 70 a#os.\n");
        printf("5. Mostrar Cantidad de personas mayores a 70.\n\n");
        printf("0. Salir\n\nOpcion> ");
        scanf(" %d%*c",&opcion);
        switch(opcion)
        {
        case 1:
            printf("Edad> ");
            scanf("%d",&edad);
            if(edad<18)
            {
                n++;
            }
            else if(edad>=18 && edad<30)
            {
                j++;
            }
            else if(edad>=30 && edad<70)
            {
                a++;
            }
            else if(edad>=70)
            {
                m++;
            }
            clrscr();
            break;
        case 2:
            clrscr();
            printf("%d persona/s.\n\n",n);
            printf("Presione [ENTER] para continuar...\n");
            getchar();
            break;
        case 3:
            clrscr();
            printf("%d persona/s.\n\n",j);
            printf("Presione [ENTER] para continuar...\n");
            getchar();
            break;
        case 4:
            clrscr();
            printf("%d persona/s.\n\n",a);
            printf("Presione [ENTER] para continuar...\n");
            getchar();
            break;
        case 5:
            clrscr();
            printf("%d persona/s.\n\n",m);
            printf("Presione [ENTER] para continuar...\n");
            getchar();
            break;
        }
    }
    while(opcion!=0);
    printf("Sale del programa...\n");
    return 0;
}

/****************************************************
UNLZ - Facultad de Ingenieria
Asignatura: Fundamentos de los Computadores Digitales
Unidad 4 - Estructuras repetitivas
Alumno: Daniel Antonio Lorenzo
EJERCICIO 9:
Escribir un programa que muestre un menú con las
siguientes opciones.

1. Ingresar edad de persona.
2. Mostrar Cantidad de personas menores a 18 años.
3. Mostrar Cantidad de personas entre 18 y 30 años.
4. Mostrar Cantidad de personas entre 30 y 70 años.
5. Mostrar Cantidad de personas mayores a 70.

 0.  Salir

Cada vez que se selecciona una opción el programa debe
realizar esa acción y volver al menú principal. Si se
selecciona la opción 0 el programa debe finalizar.
*****************************************************/
