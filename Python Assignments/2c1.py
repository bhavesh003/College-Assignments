str1 = "/*Sachin is @Cricketer& kind person"
str2 = ""
punct = '''!()-[]{};:'"\,<>./?@#$%^&*_~'''
for i in str1:
    if i not in punct:
        str2 = str2+i
print(str2)
