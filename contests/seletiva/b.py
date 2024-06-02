N = int(input())  

wins = 0

for _ in range(N):
    car_door = int(input())  

    if car_door != 1:
        wins += 1

print(wins)
