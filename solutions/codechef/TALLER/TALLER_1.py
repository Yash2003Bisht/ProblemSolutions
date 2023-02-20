# DATE: 27/07/2022, 06:18:50
# PROBLEM NAME: Who is taller!
# PROBLEM URL: https://www.codechef.com/problems/TALLER
# PROBLEM DIFFICULTY RATTING: 281
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.3M

for _ in range(int(input())):
    x, y = map(int, input().split(" "))
    if x > y:
        print("A")
    else:
        print("B")

