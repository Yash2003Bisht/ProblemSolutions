# QUESTION URL: https://www.codechef.com/problems/AVG
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.5M

for _ in range(int(input())):
    n, k, v = map(int, input().split())
    a = sum(map(int , input().split()))
    deleted_number = v*(k+n) - a
    
    if deleted_number > 0 and deleted_number % k == 0:
        print(deleted_number//k)
    else:
        print(-1)

