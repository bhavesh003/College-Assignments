num = 1234
r = 0
while num != 0:
    d = num % 10
    r = r * 10 + d
    num //= 10
print("Reversed Number: " + str(r))
