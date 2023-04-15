#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool habilitarSensorLluvia = false;
    int velocidad = 0;
    bool encendidoManual = false;
    bool llueve = false;
    int error = 0;
    char OpcionIngresada;
   // int opcionMenu;

    // Ingreso la información de habilitación del sensor de lluvia
    //printf("Habilitar sensor de lluvia: S/N (S=SI, N=NO)\n");
    scanf(" %c",&OpcionIngresada);
    if (OpcionIngresada == 'S'  || OpcionIngresada == 's' )
        habilitarSensorLluvia = true;
    else
        if (OpcionIngresada == 'N'  || OpcionIngresada == 'n' )
            habilitarSensorLluvia = false;
        else
            // Si el valor ingresado es incorrecto, saldré del programa
            error = 1;

    // Ingreso el dato de velocidad
    //printf("Ingrese la Velocidad: 1, 2 o 3 (1=baja, 2=media, 3=alta))\n");
    scanf(" %i",&velocidad);
    if (velocidad <1  || velocidad > 3 )
        // Si el valor ingresado es incorrecto, saldré del programa
        error = 1;

    // Ingreso la información de activación manual del limpiaparabrisas
    //printf("Activacion manual del limpiaparabisas: S/N (S=SI, N=NO)\n");
    scanf(" %c",&OpcionIngresada);
    if (OpcionIngresada == 'S'  || OpcionIngresada == 's' )
        encendidoManual = true;
    else
        if (OpcionIngresada == 'N'  || OpcionIngresada == 'n' )
            encendidoManual = false;
        else
        // Si el valor ingresado es incorrecto, saldré del programa
           error = 1;

    // Simulación
    // Ingreso la información que indica si llueve o no
    //printf("Esta lloviendo: S/N (S=SI, N=NO)\n");
    scanf(" %c",&OpcionIngresada);
    if (OpcionIngresada == 'S'  || OpcionIngresada == 's' )
        llueve = true;
    else
        if (OpcionIngresada == 'N'  || OpcionIngresada == 'n' )
            llueve = false;
        else
            // Si el valor ingresado es incorrecto, saldré del programa
            error = 1;

    // Solo analizaré las diferentes condiciones si todas las opciones ingresadas son válidas
    if (error==0)
    {
        // Evaluo todas las condiciones
        if ( (llueve && habilitarSensorLluvia == true) || (encendidoManual == true) )
            printf("Se activo el limpiaparabrisas con velocidad %i\n", velocidad);
        else
            printf("No se activo el limpiaparabrisas\n\n");
                }
     if(error == 1){

        printf("Error. Alguna opcion de configuracion es incorrecta\n");
    }
    return 0;
}

/******************************************************************************
UNLZ - Facultad de Ingenieria
Asignatura: Fundamentos de los Computadores Digitales
Unidad 4 - Estructuras repetitivas
Alumno: Daniel Antonio Lorenzo

--------------------------------------------------------------------------------
Tabajo Práctico Nro. 1 - Pregunta 2
--------------------------------------------------------------------------------
Se tiene un automóvil moderno con sensor de lluvia el cual tiene un
limpiaparabrisas que trabaja de la siguiente manera:

* Si llueve y la configuración de software de la computadora del automóvil tiene
habilitado el sensor de lluvia, automáticamente se activará el motor que activa
el limpiaparabrisas.

* La velocidad del movimiento del limpiaparabrisas depende de la posición de la
llave selectora la cual tiene 3 posiciones: baja, media y alta.

* Independientemente de si está habilitado o no el sensor de lluvia, el motor se
activará siempre que se seleccione la opción de activación manual.

Se escanearán de forma automática los siguientes datos:

* Sensor de lluvia: se escaneará automáticamente el valor correspondiente a la
habilitación. Por ejemplo “Habilitar sensor S/N (S=SI, N=NO)”.

* Velocidad: se escaneará automáticamente el valor correspondiente a la
velocidad deseada. Las opciones posibles deberán ser: 1, 2 o 3 (I=baja,
2=media, 3=alta).

* Activación manual del limpiaparabrisas: luego se escaneará automáticamente el
valor correspondiente. Por ejemplo “Activar comando manual S/N (S=SI, N=NO)”.

* Está lloviendo: se escaneará automáticamente si está lloviendo o no. Por
ejemplo: S/N (S=SI, N=NO)

A continuación el programa deberá evaluar opciones de configuración ingresadas
automáticamente en los valores de entrada . En dicha evaluación de condiciones
se deberá tener en cuenta por ejemplo si está lloviendo, si está activado el
comando manual, etc.
Luego deberá imprimir en pantalla la información de si se activó o no el motor y
con qué velocidad.

Los 3 posibles tipos de mensaje que deberá arrojar el programa son:
* Se activo el limpiaparabrisas con velocidad X
* No se activo el limpiaparabrisas
* Error. Alguna opcion de configuracion es incorrecta

Nota: Para evitar errores, al utilizar scanf con variables del tipo caracter,
debemos introducir un espacio antes del %c. Ejemplo:
scanf("%c",& Opcioningresada).

Es necesario validar las opciones de caracteres ingresadas por el usuario, se
recomienda no discriminar mayúsculas y minúsculas.

Por ejemplo:

* Tomar como un *Si” cuando ingrese "S" o "s”.

* Verificar que se haya ingresado un caracter válido. Si no ingresa “S” o “N”,
imprimir un cartel de error con el texto “Error. Alguna opcion de configuracion
es incorrecta." y salir del programa.

Es muy importante que la salida del texto se muestre tal cual se ve en el cuadro
"Resultado". Es decir respetando mayúsculas, minúsculas, puntuación y los
espacios. Caso contrario el validador no funcionará.

También es importante observar los valores que figuran de "Entrada", simulan ser
valores ingresados por teclado, el cual se utilizará en funciones como scanf.

Siempre se respeterá el orden, es decir, si tengo dos valores de entrada que son
N, 3, N y S, el primer scanf tomara N, el segundo scanf tomará 3, el tercero
tomará N y el útlimo scanf tomará S.

--------------------------------------------------------------------------------
ENTRADA     RESULTADO
--------------------------------------------------------------------------------
S           Se activo el limpiaparabrisas con velocidad 1
1
N
S
--------------------------------------------------------------------------------
N           No se activo el limpiaparabrisas
3
N
S
--------------------------------------------------------------------------------
n           Se activo el limpiaparabrisas con velocidad 2
2
S
s
--------------------------------------------------------------------------------
X           Error. Alguna opcion de configuracion es incorrecta
2
S
S
--------------------------------------------------------------------------------
n           Error. Alguna opcion de configuracion es incorrecta
5
S
s
--------------------------------------------------------------------------------
s           No se activo el limpiaparabrisas
1
N
N
--------------------------------------------------------------------------------
N           Se activo el limpiaparabrisas con velocidad 2
2
S
N
--------------------------------------------------------------------------------
*******************************************************************************/


















