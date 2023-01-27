# QUESTION URL: https://www.hackerrank.com/challenges/the-minion-game/problem
# STATUS: Accepted

def minion_game(string):
    # your code goes here
    vowels = "AEIOU"
    kevin = 0
    stuart = 0
    for i in range(len(string)):
        value = len(string) - i
        if string[i] in vowels:
            kevin += value
        else:
            stuart += value

    if kevin > stuart:
        print(f"Kevin {kevin}")
    elif stuart > kevin:
        print(f"Stuart {stuart}")
    else:
        print("Draw")

