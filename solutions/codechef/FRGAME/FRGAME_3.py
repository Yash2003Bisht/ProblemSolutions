# DATE: 02/08/2022, 06:41:20
# PROBLEM NAME: Game between friends
# PROBLEM URL: https://www.codechef.com/problems/FRGAME
# PROBLEM DIFFICULTY RATTING: 991
# STATUS: accepted
# TIME: 0.12
# MEMORY: 66.6M

for _ in range(int(input())):
    a, b, c, d = map(int, input().split(" "))
    for i in [c, d]:
        player_winning_game = 'S' if b > a else 'N'

        if player_winning_game != 'N':
            a += i
        else:
            b += i

    print('S' if b > a else 'N')


