# QUESTION URL: https://www.codechef.com/problems/CHFSPL

for _ in range(int(input())):
    a,b,c=map(int, input().split())
    print(max([a+b, a+c, b+c]))
