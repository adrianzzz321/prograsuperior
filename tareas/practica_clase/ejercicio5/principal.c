#include <stdio.h>
#include "funciones.c" 
int main(void)
{
    int r=1;int a=0;int b=0;int c=0;int d=0;
    while (r==1)
    {
        c=mostrar_mensaje();
        
        switch (c)
        {
        case 1:
        a=elegir_a();
        b=elegir_b();
        d=suma(a,b);
        printf("el resultado es %d\n",d);
        break;
        case 2:
        a=elegir_a();
        b=elegir_b();
        d=resta(a,b);
        printf("el resultado es %d\n",d);
        break;
        case 3:
        a=elegir_a();
        b=elegir_b();
        d=multiplicacion(a,b);
        printf("el resultado es %d\n",d);
        break;
        case 4:
        printf("LA CALCULADORA SE APAGA\n");
        r=0;
        break;
        }
    }
    
    
}

