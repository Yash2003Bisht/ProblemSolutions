# DATE: 30/09/2022, 06:25:24
# PROBLEM NAME: Break the elements
# PROBLEM URL: https://www.codechef.com/problems/ARRAYBREAK
# PROBLEM DIFFICULTY RATTING: 1191
# STATUS: accepted
# TIME: 0.07
# MEMORY: 20.4M

for _ in range(int(input())):
    n = int(input())
    a = len(list(filter(lambda x: x%2 == 0, map(int, input().split()))))
    print(0 if a == n else a)

