str = input("enter str : ")


def reverse_str(my_str):
    length = len(my_str)
    for i in range(length - 1, -1, -1):
        yield my_str[i]


for char in reverse_str(str):
    print(char, end="")
