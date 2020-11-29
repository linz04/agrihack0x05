#!/usr/bin/python
from Crypto.Cipher import AES
from Crypto.Hash import SHA1
from Crypto.Util.Padding import pad
import sys

class Unbuffered(object):
    def __init__(self, stream):
        self.stream = stream
    def write(self, data):
        self.stream.write(data)
        self.stream.flush()
    def writelines(self, datas):
        self.stream.writelines(datas)
        self.stream.flush()
    def __getattr__(self, attr):
        return getattr(self.stream, attr)

sys.stdout = Unbuffered(sys.stdout)

def header():
    quote = open('quote.txt').read()
    print quote

def main():
    flag = open('flag.txt').read().strip()
    inp  = raw_input('[*] Kunci: ').strip()
    key  = SHA1.new(inp).digest()[:16]
    iv   = AES.get_random_bytes(16)
    cip  = AES.new(key, AES.MODE_CBC, iv)
    enc  = cip.encrypt(pad(inp+flag, 16))
    print '[*] Eflag: %s' % (enc.encode('hex'))

if __name__ == "__main__":
    header()
    main()
