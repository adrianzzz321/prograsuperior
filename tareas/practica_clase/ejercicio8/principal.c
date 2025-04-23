#include <stdio.h>
#include "funciones.c" 
int main(void)
{
    int num;
    while (1)
    {
        printf("dame un numero\n");
        scanf("%d", &num);
        factorial(num);
        if (num<=0)
        {
            printf("EL PROGRAMA TERMINO\n");
            break;

        }
        
    }
    
    return 0;
}
