def operacion_1 (numero):
    suma=0
    for i in range(1,numero):
        if numero%i==0:#si el numero es divisible entonces lo suma
            suma=i+suma
    print("la suma de todos sus divisores es ", suma)
