# QUESTION URL: https://www.codechef.com/problems/RECNDSTR
# STATUS: accepted
# TIME: 0.02
# MEMORY: 10.1M

for _ in range(int(input())):
    s = input()
    n = len(s)
    print("YES" if s[1:] + s[0] == s[n-1] + s[:n-1] else "NO")

