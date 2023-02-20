# DATE: 29/08/2022, 06:31:57
# PROBLEM NAME: Bear and Candies 123
# PROBLEM URL: https://www.codechef.com/problems/CANDY123
# PROBLEM DIFFICULTY RATTING: 1028
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.4M

for _ in range(int(input())):
    a, b = map(int, input().split())
    candy = 1
    while True:
        if candy%2 == 0:
            b -= candy
            if b < 0:
                print('Limak')
                break
        else:
            a -= candy
            if a < 0:
                print('Bob')
                break
        candy += 1


