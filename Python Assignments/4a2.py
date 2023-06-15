s = {1, 2, 3, 4, 5}
print(s)
if (len(s) < 0):
    print('empty set :')
else:
    s.discard(3)
    print(s)
