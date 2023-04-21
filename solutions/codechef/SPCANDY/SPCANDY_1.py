# DATE: 21/04/2023, 07:23:20
# PROBLEM NAME: Splitting Candies
# PROBLEM URL: https://www.codechef.com/problems/SPCANDY
# PROBLEM DIFFICULTY RATTING: 1314
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.6M

for _ in range(int(input())):
    n, k = map(int, input().split())

    if k > 0:
        print(n//k, n%k)
    else:
        print(0, n)


