# DATE: 03/04/2023, 08:42:55
# PROBLEM NAME: Whats in the Name
# PROBLEM URL: https://www.codechef.com/problems/NITIKA
# PROBLEM DIFFICULTY RATTING: 1299
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.7M

for _ in range(int(input())):
    name = list(map(lambda n: n.capitalize(), input().split()))

    if len(name) == 1:
        print(name[0])
    elif len(name) == 2:
        print(f"{name[0][0]}. {name[1]}")
    else:
        print(f"{name[0][0]}. {name[1][0]}. {name[2]}")


