# Tuple it's the same concept of a list, however a tuple can't be changed after create

pessoa = ("Carlos", 17, 5040.10)
print(f"His name are {pessoa[0]}, his age are {pessoa[1]}, and wage was {pessoa[2]}")

print("\n\n")

numeros = (1, 1,2,2,2, 2, 3, 4, 5)

print(numeros[1:4])  
print(numeros[:3])   
print(numeros[-2:])  

print("\n\n")

print(len(numeros))

print("\n")


print(f" Numbers of 1: {numeros.count(1)}")
print(f" Where they are start: index {numeros.index(1)}")

print(f" Numbers of 2: {numeros.count(2)}")
print(f" Where they are start: index {numeros.index(2)}")

print(f" Numbers of 3: {numeros.count(3)}")
print(f" Where they are start: index {numeros.index(3)}")
