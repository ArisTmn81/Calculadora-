#include <stdio.h>

void main() 
{
    int num1, num2;

    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    if (num1 % num2 == 0) 
    {
        printf("%d es divisor de %d\n", num2, num1);
    } 
    else
    {
        if (num2 % num1 == 0) 
        {
        printf("%d es divisor de %d\n", num1, num2);
        } 
        else 
        {
        printf("Ninguno es divisor del otro\n");
        }
    }
}
