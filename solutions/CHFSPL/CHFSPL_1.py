# QUESTION URL: https://www.codechef.com/problems/CHFSPL
# STATUS: accepted
# TIME: 0.07
# MEMORY: 9.6M

for i in range(int(input())):
    l = list(map(int,input().split()))
    l.sort()
    print(l[1]+l[2])

