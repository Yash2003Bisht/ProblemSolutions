# DATE: 12/08/2022, 10:23:20
# PROBLEM NAME: Two Trains
# PROBLEM URL: https://www.codechef.com/problems/TWOTRAINS
# PROBLEM DIFFICULTY RATTING: 1230
# STATUS: wrong answer
# TIME: 0.02
# MEMORY: 9.6M

for _ in range(int(input())):
    n = int(input())
    p = list(map(int, input().split(" ")))
    count = 0
    for i in range(len(p)-1):
        if p[i] < p[i+1]:
            if len(p) > 2:
                count += p[i-1]-(p[i+1]-p[i])
            else:
                count += p[i+1]-p[i]

    print(sum(p)+p[0]+count)


