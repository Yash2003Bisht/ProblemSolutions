# DATE: 28/07/2023, 09:01:28
# PROBLEM NAME: Plusle and Minun on Array
# PROBLEM URL: https://www.codechef.com/problems/PMA
# PROBLEM DIFFICULTY RATTING: 1412
# STATUS: accepted
# TIME: 0.19
# MEMORY: 24.6M

for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))

    even = [abs(arr[i]) for i in range(n) if i%2 == 0]
    odd = [abs(arr[i]) for i in range(n) if i%2 != 0]

    even_total = sum(even)
    odd_total = sum(odd)

    if min(even) < max(odd):
        even_total = even_total - min(even) + max(odd)
        odd_total = odd_total - max(odd) + min(even)
    
    print(even_total - odd_total)
    

