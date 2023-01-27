# QUESTION URL: https://www.hackerrank.com/challenges/the-minion-game/problem
# STATUS: Wrong Answer

def minion_game(string):
    # your code goes here
    v = 0
    j = 0
    for i in range(len(string)):
        # print(string[i])
        v += 1 if string[i] not in "A E I O U" else 0
        j += 1 if string[i] in "A E I O U" else 0
    print(v)
    print(j)


