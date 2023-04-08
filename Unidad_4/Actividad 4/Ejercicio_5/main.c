#include <stdio.h>
#include <stdlib.h>

#define clave 6919

int main()
{
    int num,i;
    i=1;
    printf("Ingrese la clave: \n");
    scanf("%d",&num);
    while(num!=clave && i<3){
        printf("Clave incorrecta, intente nuevamente.\n");
        scanf("%d",&num);
        i = i + 1;
    }
    if(num==clave){
        printf("Bienvenido al sitio.\n");
    }else{
        printf("Acceso bloqueado.\n");
    }
    return 0;
}

/****************************************************
UNLZ - Facultad de Ingenieria
Asignatura: Fundamentos de los Computadores Digitales
Unidad 4 - Estructuras repetitivas
Alumno: Daniel Antonio Lorenzo
EJERCICIO 5:
Sabiendo que la clave de acceso de un sitio web es 6919.
Crear un programa que permita al usuario ingresar una
clave. Si la clave es ingresada correctamente emitir el
mensaje “Bienvenido al sitio”, si la clave ingresada es
errónea emitir el mensaje “Clave incorrecta, intente
nuevamente”. Si se ingresa incorrectamente la clave 3
veces emitir el mensaje “Acceso bloqueado” y terminar
el programa.
*****************************************************/
