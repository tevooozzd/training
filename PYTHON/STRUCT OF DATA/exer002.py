"""
Crie uma lista chamada numeros com os valores [5, 10, 15, 20, 25, 30].

Agora:

Adicione o número 35 ao final da lista.
Insira o número 12 na segunda posição da lista.
Remova o número 20 da lista.
Inverta a ordem dos elementos.
Ordene a lista em ordem crescente.


"""

lista = [5, 10, 15, 20, 25, 30]
lista.insert(2, 12)
lista.remove(20)
lista.reverse()
lista.sort()
print(lista)
