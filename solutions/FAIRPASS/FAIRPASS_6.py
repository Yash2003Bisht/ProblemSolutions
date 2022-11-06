# QUESTION URL: https://www.codechef.com/problems/FAIRPASS
# STATUS: wrong answer

T = int(input())
for _ in range(T):
    N, K = map(int, input().split(" "))
    
    if K >= N:
        print("Yes")
    else:
        print("No")

