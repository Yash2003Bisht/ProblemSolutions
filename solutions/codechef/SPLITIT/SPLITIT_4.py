# QUESTION URL: https://www.codechef.com/problems/SPLITIT
# STATUS: accepted
# TIME: 0.07
# MEMORY: 9.6M

for _ in range(int(input())):
    n = int(input())
    s = input()
    if s[n-1] in s[:n-1]:
        print("YES")
    else:
        print("NO")


