# Returns TRUE if ONE in a list is true boolean values, else returns FALSE
x = [True, False, False]
print(f"Uma lista com pelo menos um verdadeiro é {any(x)}")

y = [False, False, False]
print(f"Uma lista com nenhum verdadeiro é {any(y)}")