# QUESTION URL: https://www.codechef.com/problems/PARTY2
# STATUS: accepted

for _ in range(int(input())):
    n, x, k = map(int, input().split(" "))
    print("YES" if n*x <= k else "NO")

