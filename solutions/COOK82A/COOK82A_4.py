# QUESTION URL: https://www.codechef.com/problems/COOK82A
# STATUS: accepted

matches = []
for _ in range(int(input())):
    matches_dict = {}
    for _ in range(4):
        team, score = input().split(" ")
        matches_dict.update({team: int(score)})
    matches.append(matches_dict)

for match in matches:
    if match['RealMadrid'] < match['Malaga'] and match['Barcelona'] > match['Eibar']:
        print('Barcelona')
    else:
        print('RealMadrid')


