#include <stdio.h>

void main() 
{
    int compra, total;

    printf("Este es el monto de la compra: ");
    scanf("%d", &compra);

    if (compra > 2500) 
    {
        total = compra - (compra * 0.08);
    } 
    else 
    {
        total = compra;
    }

    printf("El total que debe pagar es de: %d\n", total);
}
