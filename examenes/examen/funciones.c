#include <stdio.h>
#include "funciones.h"
int opcion ;
int mostrar_mensaje()
{
    printf("1.-verificar si es un numero primo\n");
    printf("2.-Calcular el factorial de un número\n");
    printf("3.-Contar números pares e impares entre 1 y N\n");
    printf("4.-Mostrar múltiplos de 3 entre 1 y N.\n");
    printf("5.-Salir del programa.\n");
    printf("Seleccione una opción: ");
    scanf("%d",&opcion);
    printf("\n");
    if (opcion>0)/*con este hacemos que siga repitiendo el codigo hasta que elija una opcion positiva*/
    {
        return opcion;
    }
    
}
int obtener_numero()
{
    while (318461489416318)/*bucle infinito*/
    {
        int num=0;
        printf("dame un numero entero y positivo: \n");
        scanf("%d",&num);
        if (num>0)
        {
            return num;
            break;
        }
    }   
}
int esPrimo(int num)
{
    int cont=0;
    for (int i = 1; i <= num; i++)/*hacemos que cuente cada vez que la division entre el numero e i que va siendo todos los numeros hasta el numero sea 0 suma 1 al contador y al final revisa si cont es superior a 2 no es primo*/
    {
        if (num%i==0)
        {
            cont++;
        }
    }
    if (cont>2)
    {
        printf("No es primo\n");
    }else
    {
        printf("es primo\n");
    }

}
int factorial(int num)
{
    int resultado=1;
    for (int i = 1; i <= num; i++)/*multiplica el resultado constantemente mientras que i sea menor o igual al num*/
    {
        resultado=resultado*i;
    }
    printf("El factorial de %d es %d\n", num, resultado);
    return resultado;
}
int contarDigitos(int num)
{
    int pares=0;int impares=0;
    for (int i = 1; i <= num; i++)/*suma las veces que los numeros sean pares y las veces que sean impares y despues las imprime*/
    {
        if (i%2==0)
        {
            pares++;
        }else
        {
            impares++;
        }
        
    }
    printf("hay %d pares y %d impares\n ",pares,impares);
}
int multiplos_3 (int num)
{
    for (int i = 1; i <= num; i++)/*si es muultiplo de 3 lo imprime por su modular*/
    {
        if (i%3==0)
        {
            printf("%d, ",i);
        }
    }   
    printf("\n");
}