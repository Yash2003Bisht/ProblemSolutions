# DATE: 19/12/2022, 06:30:46
# PROBLEM NAME: Chef and Card Game
# PROBLEM URL: https://www.codechef.com/problems/CRDGAME
# PROBLEM DIFFICULTY RATTING: 1125
# STATUS: accepted
# TIME: 0.40
# MEMORY: 9.6M

def sum_digits(num):
    strr = str(num)
    list_of_number = list(map(int, strr.strip()))
    return sum(list_of_number)

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

