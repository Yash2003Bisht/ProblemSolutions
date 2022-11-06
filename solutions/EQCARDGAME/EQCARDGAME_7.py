# QUESTION URL: https://www.codechef.com/problems/EQCARDGAME
# STATUS: accepted

for _ in range(int(input())):
    k = int(input())
    cards = 52
    print(cards-(cards//k)*k)


