str = "bhavesh"
l = len(str)
str2 = " "
for i in range(0, len(str)):
    if l < 3:
        break
    else:
        if i in (0, 1, l-2, l-1):
            str2 = str2+str[i]
        else:
            continue
print("str 1 : "+str)
print("str 2 : "+str2)
