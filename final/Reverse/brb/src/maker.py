import random

flag = "agrihack{imagine_winning_the_waiting_game_without_waiting}"

for i in flag:
    a = random.randint(1337,7331)
    b = random.randint(1337,7331)
    print "putchar(wait(",a,",",b,") ^",(a*b)^ord(i),");"
