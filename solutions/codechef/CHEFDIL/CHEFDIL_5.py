# DATE: 15/09/2023, 08:38:58
# PROBLEM NAME: Dilemma
# PROBLEM URL: https://www.codechef.com/problems/CHEFDIL
# PROBLEM DIFFICULTY RATTING: 1461
# STATUS: accepted
# TIME: 0.04
# MEMORY: 9.5M

for _ in range(int(input())):
    s = input()
    count_1 = s.count('1')

    if count_1 % 2 != 0:
        print("WIN")
    else:
        print("LOSE")


