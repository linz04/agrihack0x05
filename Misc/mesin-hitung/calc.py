#!/usr/bin/python

import os
import sys
import random
import time

flag = "agrihack{tambah_kali_bagi_kurang_bb7b3d}"

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

def main():
  print "Menjawab benar 1000x berhadiah flag, hehe"
  list = ["+","-","*","/"]
  for i in range(1000):
    a = random.randint(1,1000)
    b = random.randint(1,1000)
    opr = random.choice(list)
    ask = str(a)+" "+opr+" "+str(b)
    print(ask)
    jawab = raw_input("Jawaban : ")
    if(int(jawab) == eval(ask)):
      print "BENAR"
    else :
      print "Lulus SD dulu ya dek"
      exit()

  print(" Congratss ini flagnya : ")
  print(flag)

if __name__ == "__main__":
  main()
