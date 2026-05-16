#include <stdio.h>

void main() 
{
    int arreglo[5] = {10, 20, 30, 40, 50};
    int i, suma = 0;

    for (i = 0; i < 5; i++) 
    {
        suma = suma + arreglo[i];
    }

    printf("La suma total del arreglo es: %d\n", suma);
}
