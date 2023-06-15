str = input("Enter a sentence : ")
dict = {}
words = str.split()
for i in words:
    if i in dict:
        dict[i] += 1
    else:
        dict[i] = 1
print(dict)
