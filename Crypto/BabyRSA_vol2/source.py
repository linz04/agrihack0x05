from Crypto.Util.number import *

def main():
	flag = ##CENSORED
	p = ##CENSORED
	q = ##CENSORED
	n = p*q
	e = 65537
	print("n = ",n)
	print("e = ",e)
	print("[+] Encrypting Flag")
	for i in flag:
		print(pow(bytes_to_long(i),e,int(n)))

if __name__ == "__main__":
	main()
