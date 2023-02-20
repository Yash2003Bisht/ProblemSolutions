# DATE: 29/08/2022, 06:01:54
# PROBLEM NAME: Bear and Candies 123
# PROBLEM URL: https://www.codechef.com/problems/CANDY123
# PROBLEM DIFFICULTY RATTING: 1028
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.5M

for _ in range(int(input())):
    a, b = map(int, input().split())
    candy = 1
    while True:
        if candy%2 == 0:
            if b >= candy:
                b -= candy
            else:
                print('Limak')
                break
        else:
            if a >= candy:
                a -= candy
            else:
                print('Bob')
                break
        candy += 1


