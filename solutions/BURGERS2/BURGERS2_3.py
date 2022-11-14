# QUESTION URL: https://www.codechef.com/problems/BURGERS2
# STATUS: wrong answer
# TIME: 0.02
# MEMORY: 9.6M

for _ in range(int(input())):
    x, y, n, r = map(int, input().split())
    y_burger_count = 0
    while n != 0:
        r -= y
        n -= 1
        total_cost_x = x * n
        if not r >= total_cost_x:
            r += y
            n += 1
            break
        y_burger_count += 1

    x_burger_count = r//x if r//x <= n else n

    if x_burger_count < 1 and y_burger_count < 1:
        print(-1)
    else:
        print(x_burger_count, y_burger_count)


