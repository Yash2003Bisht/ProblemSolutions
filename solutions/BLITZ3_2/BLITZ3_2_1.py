# QUESTION URL: https://www.codechef.com/problems/BLITZ3_2
# STATUS: accepted

for _ in range(int(input())):
    a, b, c = map(int, input().split(" "))
    print(2*(180 + a) - (b+c))


