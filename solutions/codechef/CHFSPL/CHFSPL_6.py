# DATE: 04/09/2022, 05:27:29
# PROBLEM NAME: Chef and Spells
# PROBLEM URL: https://www.codechef.com/problems/CHFSPL
# PROBLEM DIFFICULTY RATTING: 965
# STATUS: accepted
# TIME: 0.07
# MEMORY: 9.7M

for _ in range(int(input())):
    a,b,c=map(int, input().split())
    print(max([a+b, a+c, b+c]))

