minimo, maximo = input("Digite dois números para definir o intervalo:").split()
for numero in range(int(minimo), int(maximo) + 1):
    if numero % 2 == 0:
        print("Numero par: ", numero)