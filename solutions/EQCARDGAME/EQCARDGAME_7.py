# QUESTION URL: https://www.codechef.com/problems/EQCARDGAME
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.6M

for _ in range(int(input())):
    k = int(input())
    cards = 52
    print(cards-(cards//k)*k)


