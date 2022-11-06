# QUESTION URL: https://www.codechef.com/problems/ADVANCE
# STATUS: accepted

for _ in range(int(input())):
    n, x = map(int, input().split(" "))
    print("yes" if x >= n and x <= n+200 else "no")

