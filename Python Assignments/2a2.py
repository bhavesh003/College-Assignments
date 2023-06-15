str1 = input("enter str : ")
str2 = {}
for i in str1:
    if i in str2:
        str2[i] += 1
    else:
        str2[i] = 1
print("Count of all characters is  :\n " + str(str2))
