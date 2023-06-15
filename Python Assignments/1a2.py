print('Enter 6 numbers')
a = list()
for i in range(6):
    a.append((input('Enter: ')))
if len(set(a)) != len(a):
    print('DUPLICATES.')
else:
    print('Unique.')
