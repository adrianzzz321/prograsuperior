#include <stdio.h>
#include "funciones.c" 
int main(void)
{
    int a= 0;int b= 0;
    while (1)
    {
        printf("Introduce el primer numero: ");
        scanf("%d",&a);
        printf("Introduce el segundo numero: ");
        scanf("%d",&b);
        if (a==0&&b==0)
        {
            printf("EL PROGRAMA TERMINO\n");
            return 0;
        }
        {
            comparar_numeros(a,b);
            
        }
    }
    return 0;
}
