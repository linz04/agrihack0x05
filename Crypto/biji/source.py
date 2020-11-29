#use python3 !!

import random
import time
import base64

flag = open("flag.txt").read()

seedku = str(int(time.time()))
random.seed(seedku)

print("Ku beri 10 percobaan :")
for i in range(10):
	print(random.randint(1,10000000))

enc = ''
for i in flag:
	enc+= chr(ord(i)+random.randint(1,25))

print("\n\nKau inginn flag?? Apakah kau ingin flag?")
print("Ambillah flag dari biji ajaib ini !\n")
print(base64.b64encode(enc.encode()))
