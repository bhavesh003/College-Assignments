n = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
print(n)
even = list(filter(lambda x: x % 2 == 0, n))
print("even num : ", even)
odd = list(filter(lambda x: x % 2 != 0, n))
print("odd num : ", odd)
