# DATE: 04/05/2023, 07:49:31
# PROBLEM NAME: Chef and Cube
# PROBLEM URL: https://www.codechef.com/problems/CHCUBE
# PROBLEM DIFFICULTY RATTING: 1320
# STATUS: accepted
# TIME: 0.29
# MEMORY: 9.6M

for _ in range(int(input())):
    colors = input().split()
    set_1 = set(colors[:2])
    set_2 = set(colors[2:4])
    set_3 = set(colors[4:])

    if set_1.intersection(set_2).intersection(set_3):
        print("YES")
    else:
        print("NO")


