#include <stdio.h>
#include <stdlib.h>

int main()
{
    char caracter;
    int num,i;
    do{
        printf("Ingrese un numero entero positivo: ");
        scanf("%d",&num);
        printf("Ingrese un caracter: ");
        scanf(" %c%*c",&caracter);
        if(caracter!='A' && caracter!='D'){
            printf("Error, vuelva a intentarlo.\n");
        }
    }while(caracter!='A' && caracter!='D');
    if(caracter=='A'){
        for(i=0;i<=num;i++){
            printf("%d\n",i);
        }
    }else if(caracter=='D'){
        for(i=num;i>=0;i--){
            printf("%d\n",i);
        }
    }

    return 0;
}

/****************************************************
UNLZ - Facultad de Ingenieria
Asignatura: Fundamentos de los Computadores Digitales
Unidad 4 - Estructuras repetitivas
Alumno: Daniel Antonio Lorenzo
EJERCICIO 8:
Escribir un programa que permita al usuario ingresar
un número entero positivo y un carácter. Si el carácter
ingresado es ‘A’ mostrar los números desde 0 hasta el
carácter ingresado inclusive.
Si el carácter ingresado es ‘D’ mostrar los números
desde el carácter ingresado inclusive hasta el 0. Si
se ingresa otro carácter emitir un mensaje de error.
*****************************************************/
