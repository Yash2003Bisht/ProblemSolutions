# DATE: 02/08/2022, 06:45:56
# PROBLEM NAME: Game between friends
# PROBLEM URL: https://www.codechef.com/problems/FRGAME
# PROBLEM DIFFICULTY RATTING: 991
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.1M

for _ in range(int(input())):
    a, b, c, d = map(int, input().split(" "))
    for i in [c, d]:
        if a < b:
            a += i
        else:
            b += i

    print('S' if b > a else 'N')


