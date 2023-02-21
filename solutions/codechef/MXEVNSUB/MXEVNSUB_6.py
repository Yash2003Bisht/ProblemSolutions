# DATE: 27/09/2022, 06:46:22
# PROBLEM NAME: Maximum Length Even Subarray
# PROBLEM URL: https://www.codechef.com/problems/MXEVNSUB
# PROBLEM DIFFICULTY RATTING: 1221
# STATUS: accepted
# TIME: 0.95
# MEMORY: 9.8M

for _ in range(int(input())):
    n = int(input())
    n_sum = sum(list(range(n + 1)))

    if n_sum % 2 == 0:
        print(n)
    else:
        while n_sum % 2 != 0:
            n -= 1
            n_sum = sum(list(range(n)))
        print(n)


