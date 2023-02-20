# DATE: 12/08/2022, 09:30:50
# PROBLEM NAME: Make A and B equal
# PROBLEM URL: https://www.codechef.com/problems/EQUALISE
# PROBLEM DIFFICULTY RATTING: 851
# STATUS: accepted
# TIME: 0.04
# MEMORY: 9.6M

for _ in range(int(input())):
    x, y = map(int, input().split(" "))
    if x == y:
        print('YES')
    else:
        min_value = min(x, y)
        max_value = max(x, y)
        while True:
            min_value *= 2

            if min_value == max_value:
                print('YES')
                break
            elif min_value > max_value:
                print('NO')
                break


