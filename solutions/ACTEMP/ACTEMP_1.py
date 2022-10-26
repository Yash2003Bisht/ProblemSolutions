# QUESTION URL: https://www.codechef.com/problems/ACTEMP

for _ in range(int(input())):
    a, b, c = map(int, input().split())
    if b>=a and b>=c:
        print('Yes')
    else:
        print('No')

