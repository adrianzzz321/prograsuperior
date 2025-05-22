def operacion_4(numero):
    a = 0
    b = 1
    c =[]
    for i in range(numero):#regsitra el fibonacci
        c.append(a)
        a, b = b, a + b  

    print("para N =",numero,"-> ",end=" ")
    for j in range(numero,0,-1):#con este for lo lee al reves el array que genere en el anterior for
        if c[j-1]!=0:
            print(c[j-1], end=" ")
        elif c[j-1]==0:
            print(c[j-1])