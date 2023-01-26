# QUESTION URL: https://www.codechef.com/problems/CHFDBT
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.6M

for _ in range(int(input())):
    n = int(input())
    print(n//2 if n%2 == 0 else n//2 + 1)

