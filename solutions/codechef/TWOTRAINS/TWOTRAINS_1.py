# DATE: 13/08/2022, 06:06:55
# PROBLEM NAME: Two Trains
# PROBLEM URL: https://www.codechef.com/problems/TWOTRAINS
# PROBLEM DIFFICULTY RATTING: 1230
# STATUS: accepted
# TIME: 0.04
# MEMORY: 19.7M

for _ in range(int(input())):
    n = int(input())
    p = list(map(int, input().split(" ")))
    print(sum(p)+max(p))

