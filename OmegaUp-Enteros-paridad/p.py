#Lectura de datos
n = int(input())
lista = input()
p = int(input())
#Convertimos el array de str en array de int
datos = lista.split(" ")
array = [int(x) for x in datos]

#Impresion de paridad
if p == 0:
    for dato in array:
        if dato % 2 == 0:
            print(dato)
else:
    for dato in array:
        if dato % 2 == 0:
            continue
        else:
            print(dato)