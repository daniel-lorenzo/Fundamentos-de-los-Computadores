#include <stdio.h>
#include <stdlib.h>
#define CORRECT_PASSWORD (123)

int main()
{
    int opc, password;
    char operador;
    float num1, num2, resul;

    printf("OPCIONES\n");
    printf("(1) Calculadora\n");
    printf("(2) Verificar 2 numeros iguales\n");
    printf("(3) Contrase%ca\n", 164);
    printf("(Otra opcion) Sale del programa\n");
    printf("\nINGRESE LA OPCION: ");
    scanf(" %d%*c",&opc);

    switch(opc)
    {
    case 1:
        printf("\nIngrese el operador que va a utilizar(+,-,*,/): ");
        scanf(" %c%*c", &operador);
        if(operador == '+')
        {
            printf("Ingrese el primer numero a sumar: ");
            scanf(" %f%*c", &num1);
            printf("Ingrese el segundo numero a sumar: ");
            scanf(" %f%*C", &num2);
            resul=num1+num2;
            printf("El resultado de la suma es: %.2f\n", resul);
        }
        else if(operador == '-')
        {
            printf("Ingrese el primer numero a restar: ");
            scanf(" %f%*c", &num1);
            printf("Ingrese el segundo numero a restar: ");
            scanf(" %f%*C", &num2);
            resul=num1-num2;
            printf("El resultado de la resta es: %.2f\n", resul);
        }
        else if(operador == '*')
        {
            printf("Ingrese el primer numero a multiplicar: ");
            scanf(" %f%*c", &num1);
            printf("Ingrese el segundo numero a multiplicar: ");
            scanf(" %f%*c", &num2);
            resul=num1*num2;
            printf("El resultado de la multiplicacion es: %.2f\n", resul);
        }
        else if(operador == '/')
        {
            printf("Ingrese el numerador: ");
            scanf(" %f%*c", &num1);
            printf("Ingrese el divisor: ");
            scanf(" %f%*c", &num2);
            resul=num1/num2;
            printf("El resultado de la division es: %.2f\n", resul);
        }
        else
        {
            printf("La opcion ingresada no es valida, saliendo del programa...\n");
        }
        break;

    case 2:
        printf("Ingrese el primer numero: ");
        scanf(" %f%*c", &num1);
        printf("Ingrese el segundo numero: ");
        scanf(" %f%*c", &num2);
        if(num1 == num2)
        {
            printf("Los numeros ingresados son iguales\n");
        }
        else
        {
            printf("Los numeros ingresados (%.2f y %.2f) son distintos\n", num1, num2);
        }
        break;

    case 3:
        printf("Ingrese la contrase%ca: ",164);
        scanf(" %d%*c",&password);
        if(password == CORRECT_PASSWORD)
        {
            printf("La contrase%ca ingresada es correcta\n",164);
        }
        else
        {
            printf("La contrase%ca ingresada es incorrecta\n",164);
        }
        break;

    default:
        printf("Saliendo del programa...\n");
    }
    return 0;
}

/**********************************************************
UNLZ - Facultad de Ingenieria
Asignatura: Fundamentos de los Computadores Digitales
Unidad 3 - Estructuras Selectivas
Alumno: Daniel Antonio Lorenzo
EJERCICIO 14:
Un programador novato intenta diseñar un programa y por más
que intente, el mismo no compila debido a sus errores al
escribir el código. Dado el programa se tendrá que modificar
dichos "errores" y "warnings" para que el compilador pueda
traducirlo sin inconvenientes.

*Aclaración: no se deben cambiar las variables inicializadas.
Dentro del aula virtual, en el tópico de "UNIDAD 3"
encontrarán el archivo “Ejercicio 14”
en formato “.zip”, el cual deberán descomprimir para
comenzar a trabajar.
**********************************************************/


