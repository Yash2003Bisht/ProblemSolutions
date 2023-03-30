# DATE: 29/03/2023, 09:02:40
# PROBLEM NAME: The Minimum Number Of Moves
# PROBLEM URL: https://www.codechef.com/problems/SALARY
# PROBLEM DIFFICULTY RATTING: 1286
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.7M

for _ in range(int(input())):
    n = int(input())
    w = list(map(int, input().split()))
    print(sum(w) - n*min(w))


