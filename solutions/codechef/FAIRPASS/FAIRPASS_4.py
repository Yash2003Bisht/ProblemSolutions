# QUESTION URL: https://www.codechef.com/problems/FAIRPASS
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9M

T = int(input())
for _ in range(T):
    N, K = map(int, input().split(" "))
    print("Yes" if K >= N+1 else "No")
    

