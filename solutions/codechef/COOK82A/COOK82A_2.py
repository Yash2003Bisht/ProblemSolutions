# DATE: 05/08/2022, 06:08:55
# PROBLEM NAME: La Liga
# PROBLEM URL: https://www.codechef.com/problems/COOK82A
# PROBLEM DIFFICULTY RATTING: 956
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.3M

d=dict()
for i in range(int(input())):
    for i in range(4):
        d.update([(input().split())])
    if(d.get('RealMadrid')<d.get('Malaga') and d.get('Barcelona')>d.get('Eibar')):
        print('Barcelona')
    else:
        print('RealMadrid')
    

