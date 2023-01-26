# QUESTION URL: https://www.codechef.com/problems/CRDGAME
# STATUS: accepted
# TIME: 0.39
# MEMORY: 9.4M

def sum_digits(num):
    if num == 0:
        return 0
    return num % 10 + sum_digits(num // 10)

for _ in range(int(input())):
    n = int(input())
    points_a, points_b = 0, 0
    
    for _ in range(n):
        a, b = map(int, input().split())
        a = sum_digits(a)
        b = sum_digits(b)

        if a > b:
            points_a += 1
        elif a < b:
            points_b += 1
        else:
            points_a, points_b = points_a + 1, points_b + 1
    
    if points_a > points_b:
        print(0, points_a)
    elif points_a < points_b:
        print(1, points_b)
    else:
        print(2, points_a)

