#ifndef UTILIDADES_H_INCLUDED
#define UTILIDADES_H_INCLUDED

int selectopt(void);
void ingresar_datos(int vector[], int dim);
void listar_datos(int vector[], int dim);
int sumar_elementos(int vector[], int dim);
int sumar_elementos_triples(int vector[], int dim);
int contar_elementos_siguiente_mayor(int vector[], int dim);
void calcula_maximo(int vector[], int dim);

enum opciones {INGRESAR = 1, LISTAR = 2, SUMAR_ELEMENTOS = 3, CALCULA_MAXIMO = 4, SUMA_TRIPLE = 5, CONTAR_SIG_MAXIMO = 6, SALIR = 7};

#endif // UTILIDADES_H_INCLUDED
