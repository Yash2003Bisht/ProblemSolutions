# QUESTION URL: https://www.codechef.com/problems/CCHOCOLATES
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.2M

for _ in range(int(input())):
    n, x, z = map(int, input().split(" "))
    print((n*5 + x*10) // z)

