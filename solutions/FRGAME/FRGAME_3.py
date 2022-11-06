# QUESTION URL: https://www.codechef.com/problems/FRGAME
# STATUS: accepted

for _ in range(int(input())):
    a, b, c, d = map(int, input().split(" "))
    for i in [c, d]:
        player_winning_game = 'S' if b > a else 'N'

        if player_winning_game != 'N':
            a += i
        else:
            b += i

    print('S' if b > a else 'N')


