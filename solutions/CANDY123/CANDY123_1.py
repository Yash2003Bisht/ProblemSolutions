# QUESTION URL: https://www.codechef.com/problems/CANDY123

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


