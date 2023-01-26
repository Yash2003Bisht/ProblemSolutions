# QUESTION URL: https://www.codechef.com/problems/CHFSPL
# STATUS: accepted
# TIME: 0.07
# MEMORY: 9.7M

for _ in range(int(input())):
    a,b,c=map(int, input().split())
    print(max([a+b, a+c, b+c]))

