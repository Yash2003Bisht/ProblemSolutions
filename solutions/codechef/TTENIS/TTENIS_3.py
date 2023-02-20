# DATE: 08/11/2022, 07:02:52
# PROBLEM NAME: Chef and Table Tennis
# PROBLEM URL: https://www.codechef.com/problems/TTENIS
# PROBLEM DIFFICULTY RATTING: 1085
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.4M

for _ in range(int(input())):
    s = input()
    if s.count('1') > s.count('0'):
        print('WIN')
    else:
        print('LOSE')


