# QUESTION URL: https://www.codechef.com/problems/COOK82A
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.3M

for _ in range(int(input())):
    match = {}
    for _ in range(4):
        team, score = input().split(" ")
        match.update({team: int(score)})
    
    if match['RealMadrid'] < match['Malaga'] and match['Barcelona'] > match['Eibar']:
        print('Barcelona')
    else:
        print('RealMadrid')


