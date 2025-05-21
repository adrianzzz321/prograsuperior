def operacion_3(numero):
    for i in range(1, numero + 1):
        if i % 2 == 0:
            if i==numero:
                print("-",i)
            else:
                print("-",i,end=",")
        elif i % 2 != 0:
            if i==numero:
                print(i)
            else:
                print(i,end=",")
    

    