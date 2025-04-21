#alguns outputs errados
import math

def calcDist(cityA, cityB):
    xab = abs(cityA[0]) - abs(cityB[0])
    yab = abs(cityA[1]) - abs(cityB[1])
    x = math.pow(xab, 2)
    y = math.pow(yab, 2)
    k = x+y
    dist = math.sqrt(k)
    if(dist <= d):
        return 'S'
    else:
        return 'N'
    
n,q,d = map(int, input().split())

sedes = []
for i in range(n):
    a = list(map(int,input().split()))
    sedes.append(a)

for e in range(q):
    ca, cb = map(int, input().split())
    res = calcDist(sedes[ca-1], sedes[cb-1])
    print(res)

