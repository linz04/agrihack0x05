from Crypto.Util.Padding import pad, unpad
from Crypto.Cipher import AES
import os


def encrypt(pt):
    pt = pad(pt,16)
    aes = AES.new(KEY, AES.MODE_OFB, iv)
    enc = aes.encrypt(pt)
    return enc.hex()

KEY = os.urandom(16)
iv = os.urandom(16)
flag = ##CENSORED
fakeflag = b"HAHAHA cuma dikasih fake flag yaaaa HAHAHAHA"

open('enc_fake.txt','w+').write(encrypt(fakeflag))
open('enc_flag.txt','w+').write(encrypt(flag))