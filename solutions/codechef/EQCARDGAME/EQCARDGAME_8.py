# QUESTION URL: https://www.codechef.com/problems/EQCARDGAME
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.7M

for _ in range(int(input())):
    k = int(input())
    cards = 52
    equal_cards = cards/k
    
    while(not equal_cards.is_integer()):
        cards -= 1
        equal_cards = cards/k
    
    print(52-cards)
        

