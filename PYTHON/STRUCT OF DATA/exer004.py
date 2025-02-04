

lista = [[1,2,3] ,[4,5,6]]
lista.append([0,0,0])

for x in range(0, 3):
    dados = int(input("Enter the news numbers: "))
    lista[2][x] = dados

print(lista)