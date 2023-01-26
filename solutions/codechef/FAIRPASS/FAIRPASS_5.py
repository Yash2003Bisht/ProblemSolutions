# QUESTION URL: https://www.codechef.com/problems/FAIRPASS
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

