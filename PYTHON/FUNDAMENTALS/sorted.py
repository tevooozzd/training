# This function return a new ordered list with elements of a iterable
#sorted(iterável, key=None, reverse=False)

listints = [8, 6, 4, 3, 2, 9, 10]
print(sorted(listints))

liststrings = ["Jon", "Joe", "Jack", "Anne"]
print(sorted(liststrings))
print(sorted(liststrings, key=len))
print(sorted(liststrings, key=len, reverse= True))

