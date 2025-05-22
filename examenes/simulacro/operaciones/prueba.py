numero=int(input("ds"))
cont =0
for i in range (1, numero):
        guardador=numero
        while guardador>9:
            guardador-=10
        if i%3==0 or guardador==3:
            cont+=1