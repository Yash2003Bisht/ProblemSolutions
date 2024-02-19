# DATE: 19/02/2024, 09:08:49
# PROBLEM NAME: Two Ranges
# PROBLEM URL: https://www.codechef.com/problems/TWORANGES
# PROBLEM DIFFICULTY RATTING: 918
# STATUS: accepted
# TIME: 0.02
# MEMORY: 8.6M

for _ in range(int(input())):
    a, b, c, d = map(int, input().split())
    r1 = range(a, b+1)
    r2 = range(c, d+1)
    count = len(r1)

    for i in r2:
        if i not in r1:
            count += 1

    print(count)


