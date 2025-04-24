#include <stdio.h>
#include "funciones.h"
int main(void)
{
    int a;
    while (723213412346788)
    {
        printf("dame un numero entero\n");
        scanf("%d",&a);
        if (a==-1)
        {
            printf("programa finalizado");
            break;
        } 
        if (determinar_c(a)){
            printf("es par\n");
        }else {
            printf("es impar\n");
        }  
        
    }
    return 0;
}

