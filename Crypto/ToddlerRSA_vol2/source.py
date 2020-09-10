from Crypto.Util.number import *

def main():
	p = getPrime(512)
	q = getPrime(512)
	n = p*q
	e = 3
	m = ##CENSORED
	enc = pow(bytes_to_long(m),e,n)
	print("n = ",n)
	print("e = ",e)
	print("enc = ",enc)

if __name__ == "__main__":
	main()