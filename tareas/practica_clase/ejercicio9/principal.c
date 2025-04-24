#include <stdio.h>
#include "funciones.c" 
int main(int argc, char const *argv[])
{
    int a;int b;int invertido=0; 
    while (1)
    {
        printf("ingresa un numero: ");
        scanf("%d", &a);
        if (a>=0 && a < 10)
        {
            printf("el programa termino\n");
            break;
        }
        invertido=convertidor(a);
        printf("el numero introducido %d su numero invertido es %d\n",a,invertido);
    }
    
    

    return 0;
}
    