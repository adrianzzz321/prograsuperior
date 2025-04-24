#include <stdio.h>
#include "funciones.h"
int convertidor(int a)
{
    int invertido = 0;
    while (a > 0)
    {
        invertido = invertido * 10 + a % 10;
        a = a / 10;
    }
    return invertido;
    
}