#include <stdio.h>

void main() 
{
    int sueldo, nuevo_sueldo;

    printf("Ingrese el sueldo: ");
    scanf("%d", &sueldo);

    if (sueldo < 1000) 
    {
        nuevo_sueldo = sueldo + (sueldo * 0.15);
    } 
    else 
    {
        nuevo_sueldo = sueldo + (sueldo * 0.12);
    }

    printf("Este es el sueldo que recibirá con el aumento incluido: %d\n", nuevo_sueldo);
}
