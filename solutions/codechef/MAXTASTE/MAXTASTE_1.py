# QUESTION URL: https://www.codechef.com/problems/MAXTASTE
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.1M

for _ in range(int(input())):
    a, b, c, d = map(int, input().split(' '))
    print(max(a, b) + max(c, d))

