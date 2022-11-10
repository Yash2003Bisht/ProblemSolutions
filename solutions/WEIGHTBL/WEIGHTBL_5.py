# QUESTION URL: https://www.codechef.com/problems/WEIGHTBL
# STATUS: accepted
# TIME: 0.53
# MEMORY: 9.5M

for _ in range(int(input())):
    w1, w2, x1, x2, m = map(int, input().split())
    if w2-w1>=x1*m and w2-w1<=x2*m:
        print(1)
    else:
        print(0)


