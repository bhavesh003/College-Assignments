def add5(num): return num + 5


def outer_func(a, b):
    def add(a, b): return a + b
    return add5(add(a, b))


print(outer_func(5, 10))
