# QUESTION URL: https://www.codechef.com/problems/PROGLANG
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.6M

for _ in range(int(input())):
    a,b,a1,b1,a2,b2 = map(int, input().split(" "))
    if (a==a1 or a==b1) and (b==a1 or b==b1):
        print(1)
    elif (a==a2 or a==b2) and (b==a2 or b==b2):
        print(2)
    else:
        print(0)

