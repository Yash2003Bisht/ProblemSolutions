# QUESTION URL: https://www.codechef.com/problems/RECNDSTR
# STATUS: accepted
# TIME: 0.02
# MEMORY: 10.5M

for _ in range(int(input())):
    s = input()
    n = len(s)
    l_s = s[1:] + s[0] if n > 1 else s
    r_s = s[n-1] + s[0:n-1] if n > 1 else s
    print("YES" if l_s == r_s else "NO")

