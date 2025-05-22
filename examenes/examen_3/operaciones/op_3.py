def operacion_3(numero):
    for j in range(1, numero+1):
        cont = 0
        for i in range(1, j+1):
            if j % i == 0:
                cont += 1
        if cont == 2:#si el numero de divisibles es igual a dos lo imprime
            print(j)