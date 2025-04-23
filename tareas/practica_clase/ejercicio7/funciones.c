#include <stdio.h>
#include "funciones.h"
int r=0;
int ingreso_revision (int a)
{
    if (a%3==0 )
    {
        r++;
    }
    return r;
}