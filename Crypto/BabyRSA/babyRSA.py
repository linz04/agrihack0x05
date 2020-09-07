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
	inp=int(input("Berapakah faktor terbesar dari 123456789 ?\n"))
	if(inp==(3803)):
		print("Nice !\n")
		return 1
	else:
		print("Tet tott!! Salah gan!")
		exit()

def soal6():
	f=33880517319299196463600459620624613021600533542931932135984583492186469749535077705793713439029399075864778407730597592296787911209437152431773255576203991926862139149315381927052159433526330870014432152811209537572693003201557581471025298127580200861003813519910656147774927718271304187013784061
	x=135559704094911280733379964080758441789757655164565357031817762461022711318540283640837507092589154257758810178032399821560495620555773467900061257574296756908330466265464875840801549598742096139119659989584617827179692812221698192086787482773502103191954307332626707055214505989726149117205283458968909682488
	inp=int(input("Berapakah faktor terbesar dari "+str(x)+" ?\n"))
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
	p = 857504083339712752489993810777
	q = 1029224947942998075080348647219
	n = int(p*q)
	e = 65537
	m = bytes_to_long("agrihack{congratss_you've_learn_basic_RSA}")
	enc = int(pow(int(m),int(e),int(n)))
	print("Silahkan pelajari tentang RSA !")
	print("Silahkan decrypt flag ini :",enc)
	print("Berikut informasi yang anda perlukan : ")
	print("n = ",int(n)
	print("e = ",e)


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
