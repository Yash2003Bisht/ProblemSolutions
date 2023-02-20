# DATE: 22/10/2022, 07:05:33
# PROBLEM NAME: Minimise LCS
# PROBLEM URL: https://www.codechef.com/problems/MINLCS
# PROBLEM DIFFICULTY RATTING: 1367
# STATUS: accepted
# TIME: 0.04
# MEMORY: 9.9M

for _ in range(int(input())):
    n = int(input())
    a = input()
    b = input()
    lcs = [min(a.count(i), b.count(i)) for i in set(a) if i in a]
    print(max(lcs))


