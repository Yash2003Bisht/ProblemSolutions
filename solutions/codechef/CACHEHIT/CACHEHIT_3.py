# DATE: 24/04/2023, 07:44:39
# PROBLEM NAME: Cache Hits
# PROBLEM URL: https://www.codechef.com/problems/CACHEHIT
# PROBLEM DIFFICULTY RATTING: 1320
# STATUS: accepted
# TIME: 0.08
# MEMORY: 10.5M

for _ in range(int(input())):
    n, b, m = map(int, input().split())
    x = list(map(int, input().split()))
    cache_block, count = -1, 0

    for i in x:
        block = i // b
        if cache_block != block:
            count += 1
            cache_block = block

    print(count)


