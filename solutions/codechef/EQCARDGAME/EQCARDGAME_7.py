# DATE: 31/10/2022, 06:13:59
# PROBLEM NAME: Equal Card Game
# PROBLEM URL: https://www.codechef.com/problems/EQCARDGAME
# PROBLEM DIFFICULTY RATTING: 1058
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.6M

for _ in range(int(input())):
    k = int(input())
    cards = 52
    print(cards-(cards//k)*k)


