#include <stdio.h>

void main() 
{
    int pares[100];
    int i, numero_actual = 2; 

    // Almacenar
    for (i = 0; i < 100; i++) 
    {
        pares[i] = numero_actual;
        numero_actual = numero_actual + 2;
    }
     // Imprimir
    printf("Los primeros 100 numeros pares son:\n");
    for (i = 0; i < 100; i++) 
    {
        printf("%d ", pares[i]);
    }
    printf("\n");
}
