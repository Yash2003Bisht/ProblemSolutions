# QUESTION URL: https://www.codechef.com/problems/ENSPACE

for _ in range(int(input())):
    n, x, y = map(int, input().split(" "))
    print('yes' if x + y*2 <= n else 'no')

