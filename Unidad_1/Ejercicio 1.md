# Ejercicio 1

Realizar un algoritmo en **diagrama de flujo** (DF) para sumar dos números. Para el ingreso de los valores usar los nombres de variables **numero1** y **numero2**. El resultado de la suma, guardarlo en la variable llamada suma.

NOTA: El algoritmo debe estar estructurado de la siguiente forma

1. Definir las variables a emplear que son **numero1**, **numero2** y **suma**
2. Ingresar los datos, empleando las variables **numero1** y **numero2**
3. Procesar el cálculo mediante la fórmula **suma** <- **numero1** + **numero2**
4. Mostrar el resultado obtenido en la variable **suma**

### Solución

**Diagrama de flujo:**

![Untitled](Ejercicio%201%20be5cdba8cd92494cb69636821363242f/Untitled.png)

**Resolución en pseudocódigo (pseint):**

```
Proceso Ejercicio_1
	Definir numero1,numero2,suma Como Real
	Escribir 'Ingrese el primer número'
	Leer numero1
	Escribir 'Ingrese el segundo número'
	Leer numero2
	suma <- numero1+numero2
	Escribir 'La suma es: ',suma
FinProceso
```

**Resolución en C**

```c
#include <stdio.h>

int main()
{
    float numero1, numero2, suma;
    printf("Ingrese el primer numero:\n");
    scanf("%f",&numero1);
    printf("Ingrese el segundo numero:\n");
    scanf("%f",&numero2);
    suma = numero1+numero2;
    printf("La suma es: %.2f\n",suma);

    return 0;
}
```