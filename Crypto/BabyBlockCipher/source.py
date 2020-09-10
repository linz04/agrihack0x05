from Crypto.Cipher import AES
from Crypto.Util.Padding import pad, unpad
import hashlib
import os

FLAG = ##CENSORED
KEY = "ajari_aku_ngehek"

aes = AES.new(KEY, AES.MODE_ECB)
cipher = aes.encrypt(pad(FLAG,16))

print(cipher)