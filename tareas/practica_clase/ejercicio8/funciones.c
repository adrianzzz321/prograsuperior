#include <stdio.h>
#include "funciones.h"
int factorial(int num)
{
    int b=1;
    for (int i = 1; i <= num; i++)
    {
        b=b*i;
    }
    printf("El factorial de %d es %d\n", num, b);
    return b;
}