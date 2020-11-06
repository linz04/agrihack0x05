s = "weh_kok_ngecheat__"

arr = []

for i in s:
    arr.append(((((ord(i)*0x7f)^1945)**2) + 0x77)^1234)

print arr

s = ''
for i in arr:
    s += chr(((int(((i^1234)-0x77)**(0.5))^1945)/0x7f))

print s