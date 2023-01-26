# QUESTION URL: https://www.codechef.com/problems/SIGNMOVE
# STATUS: accepted
# TIME: 0.55
# MEMORY: 9.6M

for _ in range(int(input())):
    n = int(input())

    if n%2 == 0:
        print(n//2)
    else:
        print(-(n//2 + 1))

