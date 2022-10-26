# QUESTION URL: https://www.codechef.com/problems/FRGAME

for _ in range(int(input())):
    a, b, c, d = map(int, input().split(" "))
    for i in [c, d]:
        if a < b:
            a += i
        else:
            b += i

    print('S' if b > a else 'N')


