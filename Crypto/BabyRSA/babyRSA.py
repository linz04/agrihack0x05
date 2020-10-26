from Crypto.Util.number import *

def soal1():
	inp=int(input("Berapakah hasil dari 3564 mod 873?\n"))
	if(inp==72):
		print("Nice !\n")
		return 1
	else:
		print("Tet tott!! Salah gan!")
		exit()

def soal2():
	inp=int(input("Berapakah hasil dari 123456789 pangkat 100?\n"))
	if(inp==(123456789**100)):
		print("Nice !\n")
		return 1
	else:
		print("Tet tott!! Salah gan!")
		exit()


def soal3():
	inp=int(input("Berapakah hasil dari (123456789 pangkat 100 ) mod 873 ?\n"))
	if(inp==(864)):
		print("Nice !\n")
		return 1
	else:
		print("Tet tott!! Salah gan!")
		exit()

def soal4():
	inp=int(input("Berapakah hasil dari (123456789 pangkat 123456789 ) mod 123456789123 ?\n"))
	if(inp==(pow(123456789,123456789,123456789123))):
		print("Nice !\n")
		return 1
	else:
		print("Tet tott!! Salah gan!")
		exit()

def soal5():
	inp=int(input("Berapakah faktor prima terbesar dari 123456789 ?\n"))
	if(inp==(3803)):
		print("Nice !\n")
		return 1
	else:
		print("Tet tott!! Salah gan!")
		exit()

def soal6():
	f=1604413
	x=135559704094911280733379964080758441789757655164565357031817762461022711318540283640837507092589154257758810178032399821560495620555773467900061257574296756908330466265464875840801549598742096139119659989584617827179692812221698192086787482773502103191954307332626707055214505989726149117205283458968909682488
	inp=int(input("Berapakah faktor prima terbesar dari "+str(x)+" ?\n"))
	if(inp==(f)):
		print("Nice !\n")
		return 1
	else:
		print("Tet tott!! Salah gan!")
		exit()

def soal7():
	inp=int(input("Berapakah modulo inverse dari 123456789(under 11562744) ?\n"))
	if(inp==(9835599)):
		print("Nice !\n")
		print("Saya rasa basicnya cukup, mari beralih ke soal terakhir !")
		return 1
	else:
		print("Tet tott!! Salah gan!")
		exit()

def soal8():
	p=33487157890737642509961701251
	q=41794375358926499210005491991715885790475505971
	n = int(p*q)
	e = 65537
	m = bytes_to_long(b"agrihack{youve_learn_basic_RSA}")
	enc = pow(m,e,n)
	print("Silahkan pelajari tentang RSA !")
	print("Silahkan decrypt flag ini :",str(enc))
	print("Berikut informasi yang anda perlukan : ")
	print("n = ",str(n))
	print("e = ",str(e))


def main():
	soal1()
	soal2()
	soal3()
	soal4()
	soal5()
	soal6()
	soal7()
	soal8()
	
if __name__ == "__main__":
	main()
