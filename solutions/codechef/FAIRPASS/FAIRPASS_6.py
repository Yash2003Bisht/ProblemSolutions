# QUESTION URL: https://www.codechef.com/problems/FAIRPASS
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

