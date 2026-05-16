#include <stdio.h>

void main() 
{
    int distancia, dias, precio;
    
    printf("Buenas tardes, habla el capitán y en este momento les diré los precios de los tickets para todo conocedor ");
    printf("Distancia total a recorrer (ida y vuelta) en km: ");
    scanf("%d", &distancia);
    printf("Numero de dias de estancia: ");
    scanf("%d", &dias);

    precio = distancia * 0.23;

    if (dias > 7 && distancia > 800) 
    {
        precio = precio - (precio * 0.30);
    }

    printf("El precio del ticket es: %d\n", precio);
}
