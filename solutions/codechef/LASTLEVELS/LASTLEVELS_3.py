# DATE: 25/07/2022, 06:56:20
# PROBLEM NAME: The Last Levels
# PROBLEM URL: https://www.codechef.com/problems/LASTLEVELS
# PROBLEM DIFFICULTY RATTING: 679
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

