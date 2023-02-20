# DATE: 21/07/2022, 06:48:03
# PROBLEM NAME: Passes for Fair
# PROBLEM URL: https://www.codechef.com/problems/FAIRPASS
# PROBLEM DIFFICULTY RATTING: 342
# STATUS: wrong answer
# TIME: 0.00
# MEMORY: 0M

T = int(input())
for _ in range(T):
    N, K = map(int, input().split(" "))
    
    if K >= N:
        print("Yes")
    else:
        print("No")

