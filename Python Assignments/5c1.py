from collections import defaultdict
l1 = ['Class-V', 'Class-VI', 'Class-VII', 'Class-VIII']
l2 = [1, 2, 2, 3]
temp = defaultdict(set)
for c, i in zip(l1, l2):
    temp[c].add(i)
print(temp)
