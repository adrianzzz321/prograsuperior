# mi_paquete/funciones1.py
from funciones import Menu
from funciones import Numero
from funciones import operacion_1
from funciones import operacion_2
from funciones import operacion_3
from funciones import operacion_4

l=1
while l==1:
    opcion=Menu()
    match opcion:
        case '1':
            numero=Numero()
            operacion_1(numero)
            ...
        case '2':
            numero=Numero()
            operacion_2(numero)
            ...
        case '3':
            numero=Numero()
            operacion_3(numero)
            ...
        case '4':
            numero=Numero()
            operacion_4(numero)
            ...
        case '5':
            numero=Numero()
            ...
        case '6':
            l=0
