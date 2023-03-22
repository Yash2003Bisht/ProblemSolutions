# DATE: 22/03/2023, 07:28:41
# PROBLEM NAME: Array Equality
# PROBLEM URL: https://www.codechef.com/problems/ARREQU
# PROBLEM DIFFICULTY RATTING: 1281
# STATUS: accepted
# TIME: 0.11
# MEMORY: 22.5M

from collections import Counter

for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    counter_arr = Counter(arr)
    
    if n == 2:
        print("Yes" if arr[0] != arr[1] else "No")
    elif max(counter_arr.values()) > round(n/2):
        print("No")
    else:
        print("Yes")

