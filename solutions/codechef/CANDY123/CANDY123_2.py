# QUESTION URL: https://www.codechef.com/problems/CANDY123
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


