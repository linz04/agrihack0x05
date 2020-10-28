from Crypto.Cipher import AES
from Crypto.Util.Padding import pad, unpad
import hashlib
import os

def encrypt(key,pt,IV):
	aes = AES.new(key,AES.MODE_CBC,IV)
	return iv.encode("hex")+aes.encrypt(pt).encode("hex")

flag = "agrihack{Simple_CBC_with_known_iv_n_key}"
iv = os.urandom(16)
key = os.urandom(2) * 8

print(hashlib.md5(key).hexdigest())
print(encrypt(key,pad(flag,16),iv))
