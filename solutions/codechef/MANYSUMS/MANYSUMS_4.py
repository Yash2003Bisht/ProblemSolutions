# DATE: 14/07/2023, 08:21:32
# PROBLEM NAME: Distinct Pair Sums
# PROBLEM URL: https://www.codechef.com/problems/MANYSUMS
# PROBLEM DIFFICULTY RATTING: 1480
# STATUS: time limit exceeded
# TIME: -
# MEMORY: 115.4M

from itertools import combinations

for _ in range(int(input())):
    l, r = map(int, input().split())
    int_range = range(l, r+1)
    numbers_combinations = combinations(int_range, 2)
    reachable_numbers = set()
    
    for num in numbers_combinations:
        reachable_numbers.add(sum(num))
    
    print(len(reachable_numbers) + len(int_range))


