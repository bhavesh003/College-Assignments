n = int(input("enter num : "))
t = 0
while(n > 0):
    d = n % 10
    t = t+d
    n = n//10
print("sum is ", t)
