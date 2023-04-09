# Ejercicio 3

Realizar un algoritmo en DF que, al ingresar dos números por teclado, realice las 4 operaciones aritméticas fundamentales y muestre la información por pantalla.

## Solución

**Diagrama de flujo:**

![Untitled](Ejercicio%203%203cd38642c89d498e9b212d28238b56bf/Untitled.png)

**Resolución en pseint:**

```
Proceso Ejercicio_3
	Definir numero1,numero2 Como Real
	Definir suma,resta,multiplicacion,division Como Real
	Escribir 'Ingrese el primer número'
	Leer numero1
	Escribir 'Ingrese el segundo número'
	Leer numero2
	suma <- numero1+numero2
	resta <- numero1-numero2
	multiplicacion <- numero1*numero2
	division <- numero1/numero2
	Escribir 'La suma es: ',suma
	Escribir 'La resta es: ',resta
	Escribir 'La multiplicación es: ',multiplicacion
	Escribir 'La division es: ',division
FinProceso
```