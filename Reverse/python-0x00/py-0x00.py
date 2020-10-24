#          0123456789
# agrihack{dec0mpile_pyc_bytc0de__9adj3}

buf = input('input: ')
bol = True

if len(buf) != 28:
	print('invalid length.')
	exit(0)
elif buf[0] !='d':
	bol = False
elif buf[1:3][::-1] != 'ce':
	bol = False
elif buf[3:6] != '0mp':
	bol = False
elif buf[6] != 'i':
	bol = False
elif buf[7:12] != 'le_py':
	bol = False
elif ord(buf[12]) + 3 != ord('f'):
	bol = False
elif buf[13:19][::-1] != '0ctyb_':
	bol = False
elif buf[19:28] != 'de__9adj3':
	bol = False

if bol:
    print('Congratz!\nHere is your flag: agrihack{'+ buf +'}')
else:
	print('nope.')



