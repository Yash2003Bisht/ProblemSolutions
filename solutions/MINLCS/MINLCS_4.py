# QUESTION URL: https://www.codechef.com/problems/MINLCS
# STATUS: accepted
# TIME: 0.04
# MEMORY: 9.9M

for _ in range(int(input())):
    n = int(input())
    a = input()
    b = input()
    c = set(a)
    lcs = [min(a.count(i), b.count(i)) for i in c if i in a]

    print(max(lcs))







