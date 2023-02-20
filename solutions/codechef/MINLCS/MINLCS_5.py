# DATE: 22/10/2022, 07:02:10
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
    c = set(a)
    counter = 0

    for i in c:
        if i in a:
            lcs = min(a.count(i), b.count(i))
            if lcs > counter:
                counter = lcs

    print(counter)







