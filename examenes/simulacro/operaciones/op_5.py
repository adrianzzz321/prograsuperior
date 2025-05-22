def operacion_5(numero):
    numero_revision = str(numero)
    es_capicua = True
    for i in range(len(numero_revision) // 2):
        if numero_revision[i] != numero_revision[len(numero_revision) - 1 - i]:
            print("El número no es capicúa")
            break
        else:
            print("El número es capicúa")
            break