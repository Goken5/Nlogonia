def main():
    a = int(input())
    matriz = []
    for i in range(a):
        linha = list(map(int, input().split()))
        matriz.append(linha)
    
    ref = sum(matriz[0])

    for i in range(a):
        if sum(matriz[i]) != ref:
            print(0)
            return
        
    for i in range(a):
        soma = 0
        for j in range(a):
            soma += matriz[j][i]
        if soma != ref:
            print(0)
            return
    
    soma = 0
    for i in range(a):
        soma += matriz[i][i]
    if soma != ref:
        print(0)
        return
    
    soma = 0
    for i in range(a):
        soma += matriz[i][a - i - 1]
    if soma != ref:
        print(0)
        return
    print(ref)
main()
