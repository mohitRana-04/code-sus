string_1 = "zx:za:ee"
new_string1 = ""
l = []

for i in range(0, len(string_1),3):
    new_string1 = ""
    new_string1+= string_1[i]+string_1[i+1]
    l.append(new_string1)

print(l)
answer_string = ""
for i in l:
    if i[0]==i[1]:
        answer_string+=i[0]
    else:
        
        n = (abs(ord(i[0])-ord(i[1])))
        answer_string+=chr(96+n)
        
print(answer_string.upper())
# print(chr(99))

