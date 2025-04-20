casa_amigo = int(input)

passos = casa_amigo//5

# passos = 0

# while casa_amigo !=0 

if passos%5 == 0:
    print(passos)
elif passos%5 != 0:
    resto = (passos + casa_amigo%5)
    print(resto)