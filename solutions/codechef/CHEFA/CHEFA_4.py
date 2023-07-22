# DATE: 22/07/2023, 08:55:17
# PROBLEM NAME: Chef and easy problem
# PROBLEM URL: https://www.codechef.com/problems/CHEFA
# PROBLEM DIFFICULTY RATTING: 1408
# STATUS: accepted
# TIME: 0.37
# MEMORY: 24.4M

for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    arr.sort(reverse=True)
    count = sum(arr[::2])
    print(count)


