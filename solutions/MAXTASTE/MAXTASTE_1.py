# QUESTION URL: https://www.codechef.com/problems/MAXTASTE
# STATUS: accepted

for _ in range(int(input())):
    a, b, c, d = map(int, input().split(' '))
    print(max(a, b) + max(c, d))

