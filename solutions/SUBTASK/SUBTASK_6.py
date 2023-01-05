# QUESTION URL: https://www.codechef.com/problems/SUBTASK
# STATUS: wrong answer
# TIME: 0.02
# MEMORY: 9.6M

for _ in range(int(input())):
    n, m, k = map(int, input().split())
    a = list(map(int, input().split()))
    
    if sum(a) == n:
        print(100)
    elif sum(a[:m]) == m:
        print(50)
    else:
        print(0)

