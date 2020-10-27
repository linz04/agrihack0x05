#!/usr/bin/python3
import time

def main():
	print("[+] Silahkan login untuk terhubung ke wifi :")
	print("\n")
	inp = input("password : ")
	print("[+]Login...\n")
	time.sleep(1.3)
	if(inp=="secret_gemstone"):
		print("""
	[+] Login Berhasil , anda terhubung.

	Silahkan flag anda, tuan hekel :
			agrihack{R0ck_y0u_1s_4_th1ng55____b33f}
		""")
	else:
		print("Password Salah !")
		exit()

if __name__ == "__main__":
	main()
