#include <stdio.h>

void main() 
{
    int n, i;
    int producto = 1; 

    printf("Ingresa N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) 
    {
        producto = producto * i;
    }

    printf("El producto de los primeros %d numeros naturales es: %d\n", n, producto);
}
