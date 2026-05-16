#include <stdio.h>

void main() 
{
    int arreglo[8] = {-5, 0, 10, -2, 0, 8, 9, -1};
    int i, positivos = 0, negativos = 0, nulos = 0;

    for (i = 0; i < 8; i++) 
    {
        if (arreglo[i] > 0) 
        {
            positivos++;
        } 
        else
        {
            if (arreglo[i] < 0) 
            {
                negativos++;
            }   
            else 
            {
                nulos++;
            }
        }
    }

    printf("Se determino la cantidad de numeros: ");
    printf("Positivos: %d, Negativos: %d, Nulos: %d\n", positivos, negativos, nulos);
}
