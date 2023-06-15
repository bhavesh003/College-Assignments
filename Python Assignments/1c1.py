def Sequential_Search(list, item):

    pos = 0
    found = False

    while pos < len(list) and not found:
        if list[pos] == item:
            found = True
        else:
            pos = pos + 1

    return found, pos


print(Sequential_Search([11, 23, 58, 31, 56, 77, 43, 12, 65, 19], 31))
