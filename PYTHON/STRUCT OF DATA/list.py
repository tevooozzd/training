""" 
In python [ ] is a list, a struct of data, the characteristics of this struct is:
- Mutable
- Acess the elements for index
- Control the data
- Contains differents type of data at the same time (strings, intergers and floatings)
"""

list_test1 = [1, 2, 3, 4] # All the list has a indexm, start to 0 to len(list)
            # 0  1  2  3, these are the index of this list

# I can acess all of theses index
for x in range(4):
    print(list_test1[x]) # name_list[index], i can acess the values

print("\n\n")

# I can change them too
for x in range(4):
    list_test1[x] *= 10
    print(list_test1[x])

listchanged = [x * 2 for x in list_test1]
print(listchanged)

print("\n\n")

# I can see the len with the list
print(len(list_test1))

# I can add new itens, and in the especificy position 
list_test1.append(50)
print(list_test1)

for x in range(5):
    list_test1.insert(x, x + 1)
print(list_test1)

print("\n\n")

# I can clean a list
list_test1.clear()
print(list_test1)

for x in range(5):
    list_test1.insert(x, x + 1)
print(list_test1)

print("\n\n")

# I can ordene and reverse the list
print(sorted(list_test1))
print(list(reversed(list_test1)))

print("\n\n")

# And i can remove a value
list_test1.pop()
print(list_test1)

list_test1.remove(1)
print(list_test1)
