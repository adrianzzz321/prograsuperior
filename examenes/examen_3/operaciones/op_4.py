def operacion_4(numero):
    a = 0
    b = 1
    c =[]
    for i in range(numero):
        c.append(a)
        a, b = b, a + b  
        # intercambio: el nuevo "a" es el anterior "b", el nuevo "b" es a+b
    print("para N =",numero,"-> ",end=" ")
    for j in range(numero,0,-1):
        if c[j-1]!=0:
            print(c[j-1], end=" ")
        elif c[j-1]==0:
            print(c[j-1])

    # pedir al usuario:
 
    # fibonacci
# def fibonacci(n):
#     a = 0
#     b = 1
#     for i in range(n):
#         print(a, end=" ")
#         a, b = b, a + b  # intercambio: el nuevo "a" es el anterior "b", el nuevo "b" es a+b
# # pedir al usuario:
# num = int(input("¿Cuántos términos de Fibonacci querés ver? "))
# fibonacci(num)