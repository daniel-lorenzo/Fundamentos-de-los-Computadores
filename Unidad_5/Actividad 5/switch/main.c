#include <stdio.h>
#include <stdlib.h>

void ejercicio_A();
void ejercicio_B();
void ejercicio_C();
void ejercicio_D();
void ejercicio_E();
void ejercicio_F();
void ejercicio_G();
void ejercicio_H();
void ejercicio_I();
void ejercicio_J();

int main()
{
    int opcion;

    do{
    printf("######################################\n");
    printf("- Ejercicios practicos para vectores -\n");
    printf("######################################\n");
    printf(" 1. Ejercicio A\n");
    printf(" 2. Ejercicio B\n");
    printf(" 3. Ejercicio C\n");
    printf(" 4. Ejercicio D\n");
    printf(" 5. Ejercicio E\n");
    printf(" 6. Ejercicio F\n");
    printf(" 7. Ejercicio G\n");
    printf(" 8. Ejercicio H\n");
    printf(" 9. Ejercicio I\n");
    printf("10. Ejercicio J\n");
    printf("\nIngrese 0 para salir...\n");
    printf("->");
    scanf("%d%*c",&opcion);
    switch(opcion)
    {
    case 1:
        printf("Ejercicio A:\n");
        printf("Crea y rellena un vector con los primeros 50 numeros\n");
        printf("enteros y luego los muestra en pantalla en orden ascendente.\n\n");
        ejercicio_A();
        printf("\nPresione ENTER para continuar...\n");
        getchar();
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        break;

    case 2:
        printf("Ejercicio B:\n");
        printf("Crea y rellena un vector con los primeros 50 numeros\n");
        printf("enteros y luego los muestra en pantalla en orden descendente.\n\n");
        printf("");
        ejercicio_B();
        printf("\nPresione ENTER para continuar...\n");
        getchar();
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        break;

    case 3:
        printf("Ejercicio C:\n");
        printf("Crea y rellena un vector con los numeros pares comprendidos\n");
        printf("entre 1 y 100 y luego los muestra por pantalla en orden ascendente.\n\n");
        ejercicio_C();
        printf("\nPresione ENTER para continuar...\n");
        getchar();
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        break;

    case 4:
        printf("Ejercicio D\n");
        printf("Introducir 10 numeros por teclado, se guardan en un vector y luego\n");
        printf("muestra el resultado de la suma.\n\n");
        ejercicio_D();
        printf("\nPresione ENTER para continuar...\n");
        getchar();
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        break;

    case 5:
        printf("Ejercicio E\n");
        printf("Introducir 10 numeros por teclado, se guardan en un vector y luego\n");
        printf("se almacenan en otro vector multiplicados por dos.\n\n");
        ejercicio_E();
        printf("\nPresione ENTER para continuar...\n");
        getchar();
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        break;

    case 6:
        printf("Ejercicio F\n");
        printf("Introducir 10 numeros por teclado, se guardan en un vector y luego\n");
        printf("se calcula el promedio.\n\n");
        ejercicio_F();
        printf("\nPresione ENTER para continuar...\n");
        getchar();
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        break;

    case 7:
        printf("Ejercicio G\n");
        printf("Introducir 5 numeros por teclado, se guardan en un vector y luego\n");
        printf("se muestra cual es el valor mas alto y en que posicion del vector se encuentra.\n\n");
        ejercicio_G();
        printf("\nPresione ENTER para continuar...\n");
        getchar();
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        break;

    case 8:
        printf("Ejercicio H\n");
        printf("Introducir 5 numeros por teclado, se guardan en un vector y luego\n");
        printf("se ordenan en ordenan en forma descendente y se imprimen en pantalla.\n\n");
        ejercicio_H();
        printf("\nPresione ENTER para continuar...\n");
        getchar();
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        break;

    case 9:
        printf("Ejercicio I\n");
        printf("Se almacena en un vector la cadena de caracteres <<lunes>>\n\n");
        ejercicio_I();
        printf("\nPresione ENTER para continuar...\n");
        getchar();
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        break;

    case 10:
        printf("Ejercicio J\n");
        printf("Se crea un vector de caracteres de dimension 10. Y a continuacion se\n");
        printf("ingresa por teclado los valores utilizando un ciclo for y scanf.\n\n");
        ejercicio_J();
        printf("\nPresione ENTER para continuar...\n");
        getchar();
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        break;

    default:
        break;
    }

    }while(opcion!=0);

    return 0;
}

void ejercicio_A()
{
    int vec[50],i;

    for(i=0;i<50;i++){
        vec[i] = i;
    }
    for(i=0;i<50;i++){
        printf("%d ",vec[i]);
    }
    printf("\n\n");
}

void ejercicio_B()
{
    int vec[50],i;
    for(i=0;i<50;i++){
        vec[i] = i;
    }
    for(i=49;i>=0;i--){
        printf("%d ",vec[i]);
    }
    printf("\n\n");
}

void ejercicio_C()
{
    int vec[50],i;
    for(i=0;i<50;i++){
        vec[i] = 2*i + 2;
    }
    for(i=0;i<50;i++){
        printf("%d ",vec[i]);
    }
    printf("\n\n");
}

void ejercicio_D()
{
    int i;
    float vec[10],suma;
    suma = 0;
    printf("Ingrese 10 numeros;\n");
    for(i=0;i<10;i++){
        scanf("%f%*c",&vec[i]);
    }
    for(i=0;i<10;i++){
        suma = suma + vec[i];
    }
    printf("\nLa suma es: %.2f\n",suma);
    printf("\n\n");
}

void ejercicio_E()
{
    float vec1[10], vec2[10];
    int i;
    printf("Ingrese 10 numeros:\n");
    for(i=0;i<10;i++){
        scanf("%f%*c",&vec1[i]);
    }
    for(i=0;i<10;i++){
        vec2[i] = 2*vec1[i];
    }
    printf("\nMuestra el contenido:\n");
    printf("Pos.\tVector 1\tVector 2\n");
    for(i=0;i<10;i++){
        printf("%d:\t%8.2f\t%8.2f\n",i,vec1[i],vec2[i]);
    }
}

void ejercicio_F()
{
    int DIM = 10;
    float vect[DIM],suma,promedio;
    int i;
    suma = 0;
    printf("Ingrese diez numeros:\n");
    for(i=0;i<DIM;i++){
        scanf("%f%*c",&vect[i]);
        suma = suma + vect[i];
    }
    promedio = suma/DIM;
    printf("\nEl promedio es: %.2f\n",promedio);
}

void ejercicio_G()
{
    int DIM = 5;
    float vect[DIM],max;
    int i,pos;
    printf("Ingrese cinco numeros:\n");
    for(i=0;i<DIM;i++){
        scanf("%f%*c",&vect[i]);
    }
    max = vect[0];
    for(i=1;i<DIM;i++){
        if(vect[i]>max){
            max = vect[i];
            pos = i;
        }
    }
    printf("\nEl maximo es: %.2f\nEn la posicion: %d\n",max,pos);
}

void ejercicio_H()
{
    int i, j, n, aux;
    n = 5;      // tamaño del vector
    int vector[n];
    /* inicializa el vector */
    printf("Ingrese cinco numeros enteros:\n");
    for(i=0;i<n;i++){
        scanf("%d%*c",&vector[i]);
    }
    /* ordenamiento decreciente por método burbuja */
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1;j++){
            if(vector[j] < vector[j+1]){
                aux = vector[j];
                vector[j] = vector[j+1];
                vector[j+1] = aux;
            }
        }
    }
    printf("\nVector ordenado en forma descendente:\n");
    /* muestra el vector ordenado */
    for(i=0;i<n;i++){
        printf("%d\n",vector[i]);
    }
}

void ejercicio_I()
{
    char vcincochar[5] = {'l','u','n','e','s'};
    int i;
    printf("La palabra del vector es: ");
    for(i=0;i<5;i++){
        printf("%c",vcincochar[i]);
    }
    printf("\n");
}

void ejercicio_J()
{
    char vectc[10];
    int i;
    printf("Ingrese diez caracteres:\n");
    for(i=0;i<10;i++){
        scanf(" %c%*c",&vectc[i]);
    }
    printf("\nLos caracteres ingresados son:\n");
    for(i=0;i<10;i++){
        printf("%c ",vectc[i]);
    }

}

/****************************************************
UNLZ - Facultad de Ingenieria
Asignatura: Fundamentos de los Computadores Digitales
Unidad 5 - Estructuras Vectores y Matrices
Alumno: Daniel Antonio Lorenzo
EJERCICIOS: A, B, C, D, E, F, G, H, I, J
*****************************************************/
