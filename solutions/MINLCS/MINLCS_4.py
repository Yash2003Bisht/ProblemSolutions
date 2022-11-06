# QUESTION URL: https://www.codechef.com/problems/MINLCS
# STATUS: accepted

for _ in range(int(input())):
    n = int(input())
    a = input()
    b = input()
    c = set(a)
    lcs = [min(a.count(i), b.count(i)) for i in c if i in a]

    print(max(lcs))







