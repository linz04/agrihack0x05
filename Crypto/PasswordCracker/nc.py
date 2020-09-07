import time

def main():
	print("[+] Silahkan login untuk terhubung ke wifi :")
	print("\n")
	inp = input("password : ")
	print("[+]Login...\n")
	time.sleep(1.3)
	if(inp=="b33f"):
		print("""
	[+] Login Berhasil , anda terhubung.

	Silahkan flag anda, tuan hekel :
			agrihack{brut3f0rc3333_as_1t5_f1n33______b33f}
		""")
	else:
		print("Password Salah !")
		exit()

if __name__ == "__main__":
	main()