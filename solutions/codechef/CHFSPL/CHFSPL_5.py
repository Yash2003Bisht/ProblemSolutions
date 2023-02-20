# DATE: 04/09/2022, 05:29:01
# PROBLEM NAME: Chef and Spells
# PROBLEM URL: https://www.codechef.com/problems/CHFSPL
# PROBLEM DIFFICULTY RATTING: 965
# STATUS: accepted
# TIME: 0.07
# MEMORY: 9.6M

for i in range(int(input())):
    l = list(map(int,input().split()))
    l.sort()
    print(l[1]+l[2])

