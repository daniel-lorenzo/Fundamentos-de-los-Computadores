#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "seleccion_menu.h"

void ejercicio_1();
void ejercicio_2();
void ejercicio_3();
void ejercicio_4();
void ejercicio_5();

int main()
{
    int opt;
    bool seguir = true;

    while (seguir)
    {
        opt= selectopt();

        switch(opt)
        {
        case EJERCICIO_1:
            ejercicio_1();
            break;
        case EJERCICIO_2:
            ejercicio_2();
            break;
        case EJERCICIO_3:
            ejercicio_3();
            break;
        case EJERCICIO_4:
            ejercicio_4();
            break;
        case EJERCICIO_5:
            ejercicio_5();
            break;
        case SALIR:
            seguir=false;
            break;
        }
    }
    return 0;
}


void ejercicio_1()
{
    int *punt;
    int x=7;
    int y=5;
    punt=&x;
    *punt=4;
    printf("%d, %d",x,y); // ¿qué imprime este printf?
}
void ejercicio_2()
{
    int *punt;
    int x=7;
    int y=5;
    punt=&x;
    x=4;
    printf("%d, %d",*punt,y); // ¿qué imprime este printf?
}
void ejercicio_3()
{
    int *punta, *puntb;
    int x=7;
    int y=5;
    punta=&x;
    *punta=3;
    puntb=&y;
    *puntb=x;
    x=9;
    puntb=punta;
    printf("%d, %d",*puntb, y); // ¿qué imprime?
}
void ejercicio_4()
{
    int *punt,i;
    int x[5]={1,2,3,4,5};
    punt=x;
    *punt=9;
    for(i=0;i<5;i++)
    printf("%d,",x[i]); // ¿qué imprime?
}
void ejercicio_5()
{
    int *punt,i;
    int x[5]={1,2,3,4,5};
    punt=x;
    *(punt+2)=9;
    *(x+3)=7 ;
    punt[1]=11 ;
    for(i=0;i<5;i++)
    printf("%d,",*(punt+i)); // ¿qué imprime?
}
