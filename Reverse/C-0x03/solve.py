arr = [202037796, 157628025, 202037796, 170851041, 232928644, 108659776, 170851041, 202037796, 154355776, 180633600, 108659776, 256640400, 202037796, 180633600, 157628025, 202037796, 191241241]

flag = ''

# def func(a1, a2):
#   if ( a1 < a2 ):
#     result = 0;
#   else:
#     result = func(a1 - a2, a2) + 1;
#   return result;

for i in arr:
  v0 = i ** (0.5)
  v1 = (int(v0) ^ 0x799) /  0x7F;
  flag += chr(v1)

print flag