# QUESTION URL: https://www.codechef.com/problems/RECNDSTR
# STATUS: accepted
# TIME: 0.02
# MEMORY: 10.4M

for _ in range(int(input())):
    s = input()
    n = len(s)
    l_s = s[1:] + s[0]
    r_s = s[n-1] + s[:n-1]
    print("YES" if l_s == r_s else "NO")

