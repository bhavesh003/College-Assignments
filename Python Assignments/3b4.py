# tup = 2, 4, 5, 6, 2, 3, 4, 4, 7
# print(tup)
# count = tup.count(4)
# print(count)
# t = [int(x) for x in input("Enter any value:").split()]
tup = (10, 20, 30, 40, 40, 20, 50, 60)
print("repeat vals :")
for i in range(0, len(tup)):  # 0,7
    for j in range(i+1, len(tup)):  # 1,7
        if tup[i] == tup[j]:
            print(tup[i], end=" ")
