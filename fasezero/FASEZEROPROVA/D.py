import math

d, v = map(float, input().split())
t = d / v

h = (19 + math.floor(t)) % 24
t -= math.floor(t)
m = int(t * 60)

print(f"{h:02d}:{m:02d}")