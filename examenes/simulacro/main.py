# mi_paquete/funciones1.py
from funciones import Menu
from funciones import Numero
from funciones import operacion_1
l=1
while l==1:
    opcion=Menu()
    match opcion:
        case '1':
            numero=Numero()
            contador_1=operacion_1(numero)
            ...
        case '2':
            numero=Numero()
            ...
        case '3':
            numero=Numero()
            ...
        case '4':
            numero=Numero()
            ...
        case '5':
            numero=Numero()
            ...
        case '6':
            l=0
