# DATE: 05/08/2022, 06:14:24
# PROBLEM NAME: La Liga
# PROBLEM URL: https://www.codechef.com/problems/COOK82A
# PROBLEM DIFFICULTY RATTING: 956
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.3M

for _ in range(int(input())):
    match = {}
    for _ in range(4):
        match.update([input().split(" ")])
    
    if match['RealMadrid'] < match['Malaga'] and match['Barcelona'] > match['Eibar']:
        print('Barcelona')
    else:
        print('RealMadrid')


