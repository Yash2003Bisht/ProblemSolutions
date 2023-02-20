# DATE: 16/08/2022, 06:29:58
# PROBLEM NAME: Chef and Feedback
# PROBLEM URL: https://www.codechef.com/problems/ERROR
# PROBLEM DIFFICULTY RATTING: 1199
# STATUS: accepted
# TIME: 0.04
# MEMORY: 9.9M

for _ in range(int(input())):
    n=input()
    if '101' in n or '010' in n:
        print('Good')
    else:
        print('Bad')


