# DATE: 28/12/2022, 06:35:18
# PROBLEM NAME: Chef and String
# PROBLEM URL: https://www.codechef.com/problems/RECNDSTR
# PROBLEM DIFFICULTY RATTING: 1206
# STATUS: accepted
# TIME: 0.02
# MEMORY: 10.1M

for _ in range(int(input())):
    s = input()
    n = len(s)
    print("YES" if s[1:] + s[0] == s[n-1] + s[:n-1] else "NO")

