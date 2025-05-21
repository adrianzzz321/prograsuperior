def operacion_4(numero):
    primos = 0
    for j in range(2, numero + 1):  # Empezamos desde 2, ya que 1 no es primo
        cont = 0
        for i in range(1, j + 1):
            if j % i == 0:
                cont += 1
        if cont == 2:  # Solo dos divisores: 1 y el propio número
            primos += 1
    print("el numero de primos es", primos)
