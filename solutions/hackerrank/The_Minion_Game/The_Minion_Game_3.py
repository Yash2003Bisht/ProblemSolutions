# QUESTION URL: https://www.hackerrank.com/challenges/the-minion-game/problem
# STATUS: Terminated due to timeout

def minion_game(string):
    # your code goes here
    stuart = 0
    kevin = 0
    vowels = 'A E I O U'
    for i in range(0, len(string)):
        if string[i] in vowels:
            kevin += len(string[i:])
        else:
            stuart += len(string[i:])

    if kevin > stuart:
        print(f"Kevin {kevin}")
    elif stuart > kevin:
        print(f"Stuart {stuart}")
    else:
        print("Draw")

