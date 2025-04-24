#include <stdio.h>
#include "funciones.c" 
int main(void)
{
    int opcion=0;int num=0 ;int cierre=1;/*colocamos todos los valores que necesitaremos*/
    while (cierre==1)
    {
        opcion=mostrar_mensaje();/*con este mostramos el menu todas las veces*/
        switch (opcion)
        {
        case 1:
            num=obtener_numero();/*con esta funcion obtenemos un numero positivo*/
            esPrimo(num);/*con esta funcion sabremos si es primo o no*/
            break;
        case 2:
            num=obtener_numero();/*con esta funcion obtenemos un numero positivo*/
            factorial(num);/*con este obtendremos su factorial*/
            break;
        case 3:
            num=obtener_numero();/*con esta funcion obtenemos un numero positivo*/
            contarDigitos(num);/*con este obtendremos toods los numeros pares e impares*/
            break;
        case 4:
            num=obtener_numero();/*con esta funcion obtenemos un numero positivo*/
            multiplos_3(num);/*con este se imprimira todos los numeros multiplos de 3*/
            break;
        case 5:
            printf("SALIENDO DEL PROGRAMA.....\n");
            printf("----HASTA LUEGO-----\n");
            cierre=0;/*con este se termina el bucle ya que cierre deja de ser 1 */
            break;
        default:
            break;
        }
    }
    return 0;
}
