# QUESTION URL: https://www.codechef.com/problems/LASTLEVELS
# STATUS: wrong answer
# TIME: 0.02
# MEMORY: 9.1M

# x -> levels remaining in the game
# y -> minutes to complete
# z -> break time

for _ in range(int(input())):
    x, y, z = map(int, input().split(" "))
    if x <= 3:
        print(y*x)
    else:
        if x % 3 != 0:
            break_time = (x%3) + 1
        else:
            break_time = (x//3) - 1
        print((y*x)+(break_time*z))

