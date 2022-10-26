# QUESTION URL: https://www.codechef.com/problems/AIRLINE

for i in range(int(input())):
    a, b, c, d, e = map(int, input().split())
    if (a+b <= d and c <= e) or (b+c <= d and a <= e) or (a+c <= d and b <= e):
        print('YES')
    else:
        print('NO')

