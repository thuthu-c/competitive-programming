n = int(input())
def s(i):
    if(i==1): return 1
    return s2(i-2) * 2 + i
def s2(i):
    if(i==1): return 1
    return s2(i-2) + i
r = []
for i in range(n):
    r.append(int(input()))
s = list(map(s, r))
for i in s:
    print(i)