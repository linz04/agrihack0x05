#!/usr/bin/python
from Crypto.Cipher import AES
from Crypto.Hash import SHA1
from Crypto.Util.Padding import unpad
from pwn import *

p = process('./server.py', level='warn')
p.sendlineafter('Kunci: ', 'a'*16)
p.recvuntil('Eflag: ')
eflag = p.recvline().strip().decode('hex')

key = SHA1.new('a'*16).digest()[:16]
cip = AES.new(key, AES.MODE_CBC, eflag[:16])
dec = cip.decrypt(eflag[16:])
print unpad(dec, 16)
