# DATE: 28/12/2022, 09:54:34
# PROBLEM NAME: Watson asks Does Permutation Exist
# PROBLEM URL: https://www.codechef.com/problems/PERMEXIS
# PROBLEM DIFFICULTY RATTING: 1207
# STATUS: accepted
# TIME: 0.05
# MEMORY: 17.6M

for _ in range(int(input())):
    input()
    a = set(map(int, input().split()))
    
    if max(a) - min(a) == len(a)-1:
        print("YES")
    else:
        print("NO")

