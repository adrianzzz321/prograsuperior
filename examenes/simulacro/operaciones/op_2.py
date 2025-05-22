# def operacion_2 (numero):
#     for i in range(-1,numero+1,2):
#         print(" "*(numero-i-1)+"*"*(i+2))
def operacion_2(numero):
    for i in range(0,numero):
        print(" " * (numero - i - 1) + "*" * (2 * i + 1))