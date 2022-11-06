# QUESTION URL: https://www.codechef.com/problems/COOK82A
# STATUS: accepted

for _ in range(int(input())):
    match = {}
    for _ in range(4):
        team, score = input().split(" ")
        match.update({team: int(score)})
    
    if match['RealMadrid'] < match['Malaga'] and match['Barcelona'] > match['Eibar']:
        print('Barcelona')
    else:
        print('RealMadrid')


