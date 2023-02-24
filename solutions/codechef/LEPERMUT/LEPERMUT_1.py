# DATE: 24/02/2023, 08:35:54
# PROBLEM NAME: Little Elephant and Permutations
# PROBLEM URL: https://www.codechef.com/problems/LEPERMUT
# PROBLEM DIFFICULTY RATTING: 1261
# STATUS: accepted
# TIME: 0.14
# MEMORY: 9.7M

"""
-----------------------------------------------------------------
--------------------- SOLUTION FROM CHAT GPT --------------------
-----------------------------------------------------------------
"""

def is_good_permutation(n, a):
    inversions = 0
    local_inversions = 0
    for i in range(n):
        for j in range(i+1, n):
            if a[i] > a[j]:
                inversions += 1
    for i in range(n-1):
        if a[i] > a[i+1]:
            local_inversions += 1
    return inversions == local_inversions

t = int(input())
for i in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    if is_good_permutation(n, a):
        print("YES")
    else:
        print("NO")


