n = int(input())
numeros = list()

while n > 0:
    numeros.append(int(input()))
    n = n-1

minimo = min(numeros)
diversionMax = 0

for n in range(len(numeros)):
    if numeros[n] > minimo:
        diversionMax += numeros[n]
    elif numeros[n] == minimo:
        continue
print(diversionMax)
