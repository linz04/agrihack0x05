import sys

def gen(seed):
    seed = seed * 0x33333333 + 0x3333
    return seed & 0xFFFFFFFF


f = open("secret.smile")
cipher = f.read().split()
seed = 1337
flag = ''

for i in range(len(cipher)):
    cipher[i] = int(cipher[i])

for i in range(0, len(cipher)-1, 2):
    cipher[i], cipher[i+1] = cipher[i+1], cipher[i]

for i in range(len(cipher)):
    if(cipher[i] > 0xFF):
        cipher[i] = cipher[i] >> 8
    seed = gen(seed)
    flag += chr(cipher[i] ^ (seed % 256))

sys.stdout.write(flag)

# print len(flag)