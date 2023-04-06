# DATE: 06/04/2023, 09:04:32
# PROBLEM NAME: Chef and new recipe
# PROBLEM URL: https://www.codechef.com/problems/CHEFRP
# PROBLEM DIFFICULTY RATTING: 1310
# STATUS: accepted
# TIME: 0.27
# MEMORY: 25.3M

for _ in range(int(input())):
    
    n = int(input())
    arr = list(map(int, input().split()))
    arr.sort(reverse=True)

    if arr[n-1] == 1:
        print(-1)
    elif n == 1:
        print(2)
    else:
        print(sum(arr[:n-1]) + 2)


