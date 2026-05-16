#include <stdio.h>

void main() 
{
    int n, i;

    printf("Ingrese un numero entero: ");
    scanf("%d", &n);
    printf("La tabla de multiplicar del 1 al 10 de %d es: ", n);

    for (i = 1; i <= 10; i++) 
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}
