# QUESTION URL: https://www.codechef.com/problems/COOK82A
# STATUS: accepted

d=dict()
for i in range(int(input())):
    for i in range(4):
        d.update([(input().split())])
    if(d.get('RealMadrid')<d.get('Malaga') and d.get('Barcelona')>d.get('Eibar')):
        print('Barcelona')
    else:
        print('RealMadrid')
    

