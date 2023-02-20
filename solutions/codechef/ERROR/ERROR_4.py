# DATE: 16/08/2022, 06:26:05
# PROBLEM NAME: Chef and Feedback
# PROBLEM URL: https://www.codechef.com/problems/ERROR
# PROBLEM DIFFICULTY RATTING: 1199
# STATUS: accepted
# TIME: 1.38
# MEMORY: 11.2M

for _ in range(int(input())):
    n = input()
    n = [i for i in n]
    for i in range(len(n)-2):
        if (n[i] == '0' and n[i+1] == '1' and n[i+2] == '0') or (n[i] == '1' and n[i+1] == '0' and n[i+2] == '1'):
            print('Good')
            break
    else:
        print('Bad')


