#include <stdio.h>
#include "funciones.h"
int a;int b; int c;
int mostrar_mensaje()
{
    printf("1.-Sumar dos numeros\n");
    printf("2.-Restar dos numeros\n");
    printf("3.-Multiplicar dos numeros\n");
    printf("4.-la calculadora se apaga\n");
    printf("DIME TU OPCION:");
    scanf("%d",&c);
    printf("\n");
    return c;
}
int elegir_a()
{
    printf("dime el primer numero:");
    scanf("%d",&a);
    printf("\n");
    return a;
}
int elegir_b()
{
    printf("dime el primer numero:");
    scanf("%d",&b);
    printf("\n");
    return b;
}
int suma(a,b)
{
    return a+b;
}
int resta(a,b)
{
    return a-b;
}
int multiplicacion(a,b)
{
    return a*b;
}

