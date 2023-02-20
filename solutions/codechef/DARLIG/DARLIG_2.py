# DATE: 04/08/2022, 06:52:48
# PROBLEM NAME: Dark Light
# PROBLEM URL: https://www.codechef.com/problems/DARLIG
# PROBLEM DIFFICULTY RATTING: 994
# STATUS: wrong answer
# TIME: 0.00
# MEMORY: 0M

for _ in range(int(input())):
    a, b = map(int, input().split(" "))
    if a%4 == 0:
        print('Off' if b == 0 else 'On')
    else:
        print('Ambiguous')

