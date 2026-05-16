#include <stdio.h>

void main() 
{
    int i, numero;
    int positivos = 0, negativos = 0, nulos = 0;

    printf("Introduzca 100 numeros:\n");
    for (i = 0; i < 100; i++) 
    {
        scanf("%d", &numero);
        if (numero > 0) 
        {
            positivos++;
        } 
        else if (numero < 0) 
        {
            negativos++;
        } 
        else 
        {
            nulos++;
        }
    }
    
    printf("La suma de los tipos de números introducidos son: ");
    printf("Positivos: %d\n", positivos);
    printf("Negativos: %d\n", negativos);
    printf("Nulos: %d\n", nulos);
}
