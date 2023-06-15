str1 = "ppk"
str2 = "abc"
replace1 = str1.replace(str1[0:2], str2[0:2])
replace2 = str2.replace(str2[0:2], str1[0:2])
replace3 = replace1+replace2
print(replace3)
