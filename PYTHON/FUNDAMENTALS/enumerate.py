# Open the possible to get the index and the value at the same time

list1 = [1, 2, 3]
for index, value in enumerate(list1):
    print(f"Index {index} : Value {value}")

print("\n\n")

list2 = ["Hi", "how", "are", "you", "?"]
for index, value in enumerate(list2):
    print(f"Index {index} : Value {value}")

print("\n\n")

list2 = [True, True, False]
for index, value in enumerate(list2):
    print(f"Index {index} : Value {value}")
