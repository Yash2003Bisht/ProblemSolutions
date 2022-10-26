# QUESTION URL: https://www.codechef.com/problems/MINLCS

for _ in range(int(input())):
    n = int(input())
    a = input()
    b = input()
    lcs = [min(a.count(i), b.count(i)) for i in set(a) if i in a]
    print(max(lcs))


