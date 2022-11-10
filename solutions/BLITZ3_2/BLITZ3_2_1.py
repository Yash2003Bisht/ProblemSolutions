# QUESTION URL: https://www.codechef.com/problems/BLITZ3_2
# STATUS: accepted
# TIME: 0.72
# MEMORY: 9.1M

for _ in range(int(input())):
    a, b, c = map(int, input().split(" "))
    print(2*(180 + a) - (b+c))


