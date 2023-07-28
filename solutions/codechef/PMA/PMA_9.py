# DATE: 28/07/2023, 09:02:42
# PROBLEM NAME: Plusle and Minun on Array
# PROBLEM URL: https://www.codechef.com/problems/PMA
# PROBLEM DIFFICULTY RATTING: 1412
# STATUS: accepted
# TIME: 0.28
# MEMORY: 24.6M

for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))

    even = [abs(arr[i]) for i in range(n) if i%2 == 0]
    odd = [abs(arr[i]) for i in range(n) if i%2 != 0]

    even_total = sum(even)
    odd_total = sum(odd)
    
    min_even = min(even)
    max_odd = max(odd)

    if min_even < max_odd:
        even_total = even_total - min_even + max_odd
        odd_total = odd_total - max_odd + min_even
    
    print(even_total - odd_total)


