# QUESTION URL: https://www.hackerrank.com/challenges/library-fine/problem
# STATUS: Wrong Answer

d1, m1 , y1 = map(int, input().split())
d2, m2 , y2 = map(int, input().split())

d = d1 - d2
m = m1 - m2
y = y1 - y2

if y > 0:
    print(10000)
elif m > 0:
    print(500*m)
else:
    print(15*d)
