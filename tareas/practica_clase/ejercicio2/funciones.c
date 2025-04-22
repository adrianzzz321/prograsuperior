#include <stdio.h>
#include "funciones.h"

int numero_digitos(int b)
{
    int c = 0;
    while (b > 0)
    {
        b = b / 10;
        c++;
    }
    printf("El numero tiene %d digitos\n", c);
    return c;
}