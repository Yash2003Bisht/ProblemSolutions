# DATE: 18/04/2023, 08:16:34
# PROBLEM NAME: Permutation Clear
# PROBLEM URL: https://www.codechef.com/problems/PERMCLEAR
# PROBLEM DIFFICULTY RATTING: 1308
# STATUS: accepted
# TIME: 0.10
# MEMORY: 25.6M

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    
    k = int(input())
    b = set(map(int, input().split()))
    
    print(*[i for i in a if i not in b])


