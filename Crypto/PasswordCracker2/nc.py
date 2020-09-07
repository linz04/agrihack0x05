import time

def main():
	print("[+] Silahkan login untuk terhubung ke wifi :")
	print("\n")
	inp = input("password : ")
	print("[+]Login...\n")
	time.sleep(1.3)
	if(inp=="sarahsue@gmail.com"):
		print("""
	[+] Login Berhasil , anda terhubung.

	Silahkan flag anda, tuan hekel :
			agrihack{d0n7_u53_w34k__p455w000000RD}
		""")
	else:
		print("Password Salah !")
		exit()

if __name__ == "__main__":
	main()