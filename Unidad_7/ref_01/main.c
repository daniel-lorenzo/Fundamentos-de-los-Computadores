#include <stdio.h>

void modify_vector(int * vec, int size);

int main() {
    int vec[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int i;

    printf("Los valores originales del vector: \n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", vec[i]);
    }

    modify_vector(vec, size);

    printf("\n\nLuego de la modificacion son: \n");
    for (i = 0; i < size; i++) {
        printf("%d ", vec[i]);
    }
    printf("\n");

    return 0;
}

void modify_vector(int * vec, int size) {
    int i;
    for (i = 0; i < size; i++) {
        vec[i] = vec[i] * 2;
    }
}
