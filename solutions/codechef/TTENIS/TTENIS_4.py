# QUESTION URL: https://www.codechef.com/problems/TTENIS
# STATUS: wrong answer
# TIME: 0.03
# MEMORY: 9.6M

for _ in range(int(input())):
    s = input()
    
    chef_points = 0
    chef_subsequently_wins =0
    opponent_points = 0
    opponent_subsequently_wins = 0
    
    check_subsequently_wins = False
    
    for i in s:
        if i == '1':
            chef_points += 1
            chef_subsequently_wins += 1 if check_subsequently_wins else 0
        else:
            opponent_points += 1
            opponent_subsequently_wins += 1 if check_subsequently_wins else 0
        
        if chef_points == opponent_points == 10:
            check_subsequently_wins = True
        elif chef_points >= 11 and not check_subsequently_wins:
            print('WIN')
            break
        elif opponent_points >= 11 and not check_subsequently_wins:
            print('LOSE')
            break
        
        if check_subsequently_wins and chef_subsequently_wins == 2:
            print('WIN')
            break
        elif check_subsequently_wins and opponent_subsequently_wins == 2:
            print('LOSE')
            break
        
    
   

