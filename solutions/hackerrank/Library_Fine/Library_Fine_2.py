# QUESTION URL: https://www.hackerrank.com/challenges/library-fine/problem
# STATUS: Accepted

d1, m1 , y1 = map(int, input().split())
d2, m2 , y2 = map(int, input().split())

if y1 < y2:
    print(0)
elif m1 < m2 and d1 > d2:
    print(0)
elif y1 > y2:
    print(10000)
elif m1 > m2:
    print(500*(m1-m2))
elif d1 > d2:
    print(15*(d1-d2))
else:
    print(0)
    
