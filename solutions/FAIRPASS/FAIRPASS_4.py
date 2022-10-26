# QUESTION URL: https://www.codechef.com/problems/FAIRPASS

T = int(input())
for _ in range(T):
    N, K = map(int, input().split(" "))
    print("Yes" if K >= N+1 else "No")
    

