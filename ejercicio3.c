#include <stdio.h>

void main() 
{
    int dolares, pesos;
    
    printf("Ingrese la cantidad que guste en dolares: ");
    scanf("%d", &dolares);
    while(dolares<0)
    {
        printf("No se aceptan cantidades negativas, vuelva a ingresar la cantidad que desea convertir: ");
        dolares = 0;
        scanf("%d", &dolares);
    }
    pesos = dolares * 11.96;
    printf("La cantidad en pesos es: %d\n", pesos);
}
