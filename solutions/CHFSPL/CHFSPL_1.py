# QUESTION URL: https://www.codechef.com/problems/CHFSPL
# STATUS: accepted

for i in range(int(input())):
    l = list(map(int,input().split()))
    l.sort()
    print(l[1]+l[2])

