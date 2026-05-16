#include <stdio.h>

void main() 
{
    int arreglo[10] = {1, 5, 3, 5, 8, 5, 9, 2, 5, 4};
    int i, buscar, contador = 0;

    printf("Que numero busca encontrar mas veces? ");
    scanf("%d", &buscar);

    for (i = 0; i < 10; i++) {
        if (arreglo[i] == buscar) {
            contador++;
        }
    }

    printf("El numero %d aparece %d veces.\n", buscar, contador);
}
