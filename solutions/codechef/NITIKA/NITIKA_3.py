# DATE: 03/04/2023, 08:40:23
# PROBLEM NAME: Whats in the Name
# PROBLEM URL: https://www.codechef.com/problems/NITIKA
# PROBLEM DIFFICULTY RATTING: 1299
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.6M

for _ in range(int(input())):
    name = input().split()

    if len(name) == 1:
        print(name[0].capitalize())
    elif len(name) == 2:
        print(f"{name[0][0].capitalize()}. {name[1].capitalize()}")
    else:
        print(f"{name[0][0].capitalize()}. {name[1][0].capitalize()}. {name[2].capitalize()}")


