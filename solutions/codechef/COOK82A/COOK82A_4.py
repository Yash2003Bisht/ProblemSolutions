# DATE: 05/08/2022, 06:02:25
# PROBLEM NAME: La Liga
# PROBLEM URL: https://www.codechef.com/problems/COOK82A
# PROBLEM DIFFICULTY RATTING: 956
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.3M

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


