#include <stdio.h>
#include "funciones.h"
int comparar_numeros(int a,int b)
{
    if (a==b)
    {
        printf("Los numeros son iguales (%d)\n",a);
        return 0;
    }else if (a>b)
    {
        printf("El primer numero (%d) es mayor que el segundo numero (%d)\n",a,b);
        return 0;
    }else if (b>a)
    {
        printf("El segundo numero (%d) es mayor que el primer numero (%d)\n",b,a);
        return 0;
    }
}