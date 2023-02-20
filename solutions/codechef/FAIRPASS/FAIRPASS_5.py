# DATE: 21/07/2022, 06:50:34
# PROBLEM NAME: Passes for Fair
# PROBLEM URL: https://www.codechef.com/problems/FAIRPASS
# PROBLEM DIFFICULTY RATTING: 342
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.1M

T = int(input())
for _ in range(T):
    N, K = map(int, input().split(" "))
    
    if K >= N+1:
        print("Yes")
    else:
        print("No")

