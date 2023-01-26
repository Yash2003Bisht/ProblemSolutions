# QUESTION URL: https://www.codechef.com/problems/COUNTP
# STATUS: accepted
# TIME: 0.31
# MEMORY: 25M

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    odd_count = list(map(lambda x: x%2 != 0, a)).count(True)
    
    if odd_count % 2 == 0 and odd_count != 0:
        print('YES')
    else:
        print('NO')

