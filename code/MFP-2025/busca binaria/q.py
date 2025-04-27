
def bb (vetor, target) :

    left = 0
    right = len(vetor) - 1

    while left <= right :
        mid = (left + right) // 2

        if vetor[mid] == target :
            return mid
        elif vetor[mid] < target :
            left = mid + 1
        else :
            right = mid - 1
    return -1

def main () :
    vetor = [1, 2, 3, 4, 5, 6, 7, 8, 9]
    target = 5

    resultado = bb(vetor, target)

    if resultado != -1 :
        print(f"Elemento encontrado na posição {resultado}")
    else :
        print("Elemento não encontrado")

