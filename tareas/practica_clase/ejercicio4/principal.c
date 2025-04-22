#include <stdio.h>
#include "funciones.c" 
int main(void)
{
    int suma=0;int a=1;
    while (1)
    {
        printf("ingrese un numero: ");
        scanf("%d", &a);
        if (a>0)
        {   
            suma = suma_de_positivos(a);
        }else
        {
            printf("el programa termino la suma total es %d\n", suma);
            break;
        }
    }
    
}

