# DATE: 12/08/2022, 10:28:45
# PROBLEM NAME: Two Trains
# PROBLEM URL: https://www.codechef.com/problems/TWOTRAINS
# PROBLEM DIFFICULTY RATTING: 1230
# STATUS: wrong answer
# TIME: 0.02
# MEMORY: 9.5M

for _ in range(int(input())):
    n = int(input())
    p = list(map(int, input().split(" ")))
    count = [j-i for i, j in zip(p[:-1], p[1:])]
    print(sum(p)+p[0]+sum(count))

