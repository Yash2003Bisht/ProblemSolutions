# QUESTION URL: https://www.codechef.com/problems/EQUALISE
# STATUS: accepted

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


