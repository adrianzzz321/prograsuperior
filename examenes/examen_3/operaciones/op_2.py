def operacion_2(numero):
    letras="abcdefghijklmnopqrstuvwxyz"#un string con todas las letras
    for i in range(0,numero):
        print( letras[i] * (2 * i + 1))#mientras va colocando cada linea, va colocando el numero de letras que tendria que haber