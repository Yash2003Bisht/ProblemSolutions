# QUESTION URL: https://www.codechef.com/problems/COUNTP
# STATUS: accepted
# TIME: 0.29
# MEMORY: 26M

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    odd_count = 0
    
    for i in a:
        if i%2 != 0:
            odd_count += 1
    
    if odd_count % 2 == 0 and odd_count != 0:
        print('YES')
    else:
        print('NO')

