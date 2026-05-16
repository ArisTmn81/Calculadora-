#include <stdio.h>

void main() 
{
    int radio, area, circunferencia;
    int pi = 3.14159;

    printf("Ingrese el radio del circulo: ");
    scanf("%d", &radio);
    while(radio<0)
    {
        radio = 0;
        printf("Vuelva a ingresar el radio ");
        scanf("%d", &radio);
    }
    area = pi * (radio * radio);
    circunferencia = 2 * pi * radio;

    printf("Area: %d\n", area);
    printf("Circunferencia: %d\n", circunferencia);
}
