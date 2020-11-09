#!/usr/bin/python

import os
import sys
import random
import time


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

if __name__ == "__main__":
  flag = "agrihack{import_bintang_PWN_56ba5fc}"
  print """
******************************************
*                                        *
*     S E L A M A T   D A T A N G        *
*                                        *
*  D I   K E L A S   B E R H I T U N G   *
*                                        *
******************************************
Hitunglah dengan benar, ada berapa banyak bintang dibawah ini!!!
Jika kamu bisa melakukannya sebanyak 1000x , 
kamu bisa mendapatkan FLAG loh !!! Wah keren
"""
i = 1
while(i<1001):
  len=random.randint(1,251)
  print """
  Round {0} :
{1}""".format(i,'*'*len)
  cek = raw_input("Jumlah Bintang : ")
  if(cek==str(len)):
      print """
      Benarr !! YAY"""
      i = i+1
  else:
      print """
      kok bego sih :(
"""

print """
CONGRATS!! HERE'S UR FLAG !!
FLAG : {0}
""".format(flag)
