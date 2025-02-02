# Returns TRUE if ALL elements in a list is true boolean values, else returns FALSE

x = [True, True, True]
print(f"A lista com todos os verdadeiros é {all(x)}")

y = [True, True, False]
print(f"A lista com pelo menos um falso é {all(y)}")