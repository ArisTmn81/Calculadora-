#include <stdio.h>

void main() {
    int n1, n2;
    printf("Ingrese el primer numero: ");
    scanf("%d", &n1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &n2);
    
    printf("Estas son las operaciones básicas entre %d y %d ", n1, n2);
    printf("La suma es: %d\n ", n1 + n2);
    printf("La resta es: %d\n ", n1 - n2);
    printf("El producto es: %d\n ", n1 * n2);
}
