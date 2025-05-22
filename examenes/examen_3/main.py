from operaciones import Menu
from operaciones import Numero
# from operaciones import operacion_1
# from operaciones import operacion_2
# from operaciones import operacion_3
# from operaciones import operacion_4
# from operaciones import operacion_5
l=1
while l==1:
    opcion=Menu()
    match opcion:
        case '1':
            numero=Numero()
            # operacion_1(numero)
            ...
        case '2':
            numero=Numero()
            # operacion_2(numero)
            ...
        case '3':
            numero=Numero()
            # operacion_3(numero)
            ...
        case '4':
            numero=Numero()
            # operacion_4(numero)
        case '5':
            l=0
