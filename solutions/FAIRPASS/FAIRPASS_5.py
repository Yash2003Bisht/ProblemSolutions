# QUESTION URL: https://www.codechef.com/problems/FAIRPASS

T = int(input())
for _ in range(T):
    N, K = map(int, input().split(" "))
    
    if K >= N+1:
        print("Yes")
    else:
        print("No")

