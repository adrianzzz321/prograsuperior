#include <stdio.h>
#include "funciones.c" 
int main(int argc, char const *argv[])
{
    int a=0;int r =0;
    while (1)
    {
    
        printf("ingresa un numero: \n");
        scanf("%d",&a);
        r=ingreso_revision(a);
        if (a==-1)
        {
            printf("EL PROGRAMA TERMINOse encontro %d numeros multiplos de 3\n",r);
            break;
        }
    }
    return 0;
}
