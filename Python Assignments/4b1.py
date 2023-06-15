str = input('Enter the string : ')
str = str.lower()
vowels = set("aeiou")
for char in str:
    if char in vowels:
        vowels.remove(char)
print("Entered String is ", str)
if len(vowels) == 0:
    print("The string contains all vowels")
else:
    print("The string does not contain all vowels")
