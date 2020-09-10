from Crypto.Cipher import AES
from Crypto.Util.Padding import pad, unpad
import hashlib
import os

FLAG = ##CENSORED
KEY = b"soalsebelumnyaez"
iv = os.urandom(16)

aes = AES.new(KEY, AES.MODE_CBC, iv)
cipher = aes.encrypt(pad(FLAG,16))
enc_cipher = iv.hex() + cipher.hex()

print(enc_cipher)