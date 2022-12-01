# QUESTION URL: https://www.codechef.com/problems/COUNTP
# STATUS: accepted
# TIME: 0.30
# MEMORY: 25.1M

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    odd_count = sum([1 for i in a if i%2 != 0])
    
    if odd_count % 2 == 0 and odd_count != 0:
        print('YES')
    else:
        print('NO')

