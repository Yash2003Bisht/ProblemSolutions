# DATE: 14/07/2023, 08:21:57
# PROBLEM NAME: Distinct Pair Sums
# PROBLEM URL: https://www.codechef.com/problems/MANYSUMS
# PROBLEM DIFFICULTY RATTING: 1480
# STATUS: accepted
# TIME: 0.52
# MEMORY: 9.5M

for _ in range(int(input())):
    l, r = map(int, input().split())
    print(len(range(l*2, r*2))+1)


