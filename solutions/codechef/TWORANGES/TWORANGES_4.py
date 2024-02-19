# DATE: 19/02/2024, 09:07:24
# PROBLEM NAME: Two Ranges
# PROBLEM URL: https://www.codechef.com/problems/TWORANGES
# PROBLEM DIFFICULTY RATTING: 918
# STATUS: accepted
# TIME: 0.03
# MEMORY: 8.4M

for _ in range(int(input())):
    a, b, c, d = map(int, input().split())
    r1 = range(a, b+1)
    r2 = range(c, d+1)
    common = list(r1)
    count = 0

    for i in r2:
        if i not in common:
            count += 1

    print(len(common) + count)


