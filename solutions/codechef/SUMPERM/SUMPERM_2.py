# DATE: 03/04/2023, 08:09:55
# PROBLEM NAME: Prefix Permutation
# PROBLEM URL: https://www.codechef.com/problems/SUMPERM
# PROBLEM DIFFICULTY RATTING: 1289
# STATUS: accepted
# TIME: 0.03
# MEMORY: 10.1M

for _ in range(int(input())):
    n = int(input())

    if n%2 != 0:
        print(-1)

    else:
        lst = list(range(1, n+1, 2))
        result = []

        for i in lst:
            result.append(i+1)
            result.append(i)
        
        print(*result)


