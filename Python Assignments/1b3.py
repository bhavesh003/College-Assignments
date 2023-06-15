n = int(input("enter the numer of rows to print"))
for i in range(n, 0, -1):
    for j in range(1, i+1):
        print(j, end=" ")
    print()
