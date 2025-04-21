num = int(input())

vetor = [1, 1,1]

contador = 3

while contador < num :
    vetor.append(vetor[contador-1]+vetor[contador-2]+vetor[contador-3])
    contador = contador + 1


print(vetor[num-1])