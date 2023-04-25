# DATE: 25/04/2023, 07:46:26
# PROBLEM NAME: Make them Zero
# PROBLEM URL: https://www.codechef.com/problems/MAKEZERO
# PROBLEM DIFFICULTY RATTING: 1320
# STATUS: accepted
# TIME: 0.06
# MEMORY: 18.6M

from functools import reduce

for _ in range(int(input())):
    n = int(input())
    arr = map(int, input().split())
    total = reduce(lambda x, y: x | y, arr)
    print(bin(total)[2:].count("1"))


