#include <stdio.h>
#include "funciones.h"
typedef enum {ROJO, VERDE, AMARILLO} semaforo;
int color_semaforo()
{
    int cont=0;int a=0;
    for (a=0; cont<11; a++)
    {
        switch (a)
        {
        case 0:
        printf("El semaforo es: ROJO\n");
        sleep(2);
        case 1:
        printf("El semaforo es: VERDE\n");
        sleep(2);
        case 2:
        printf("El semaforo es: AMARILLO\n");
        sleep(2);
        case 3:
        a=-1;
        break;
        }
        printf("%d",cont);
        cont++;
    }
    printf("SE APAGO EL SEMAFORO\n");
}
