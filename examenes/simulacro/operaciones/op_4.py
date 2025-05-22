def operacion_4(numero):
    primos = 0
    for j in range(1, numero+1):
        cont = 0
        for i in range(1, j+1):
            if j % i == 0:
                cont += 1
        if cont == 2:
            primos += 1
    print("El número de primos es", primos)