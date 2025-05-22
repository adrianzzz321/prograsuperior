def operacion_1(numero):
    cont = 0
    for i in range(1, numero+1):
        guardador = i % 10
        if i % 3 == 0 or guardador == 3:
            cont += 1
    print("el  numero de veces ", cont)
 