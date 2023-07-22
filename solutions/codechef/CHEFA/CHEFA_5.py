# DATE: 22/07/2023, 08:54:09
# PROBLEM NAME: Chef and easy problem
# PROBLEM URL: https://www.codechef.com/problems/CHEFA
# PROBLEM DIFFICULTY RATTING: 1408
# STATUS: accepted
# TIME: 0.47
# MEMORY: 24.4M

for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    arr.sort(reverse=True)
    count = 0

    for i in range(n):
        if i%2 == 0:
            count += arr[i]

    print(count)


