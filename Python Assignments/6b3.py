def sum(n):
    if n <= 1:
        return n
    else:
        return n + sum(n-1)


num = 10
if num < 0:
    print('enter positive number')
else:
    print('the sum is :', sum(num))
