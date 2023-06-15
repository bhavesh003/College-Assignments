str = 'w3resource'
dict = {}
for l in str:
    dict[l] = dict.get(l, 0) + 1
print(dict)
