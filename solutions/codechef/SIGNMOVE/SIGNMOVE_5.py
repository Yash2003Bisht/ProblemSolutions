# DATE: 20/12/2022, 07:00:34
# PROBLEM NAME: Sign Moves
# PROBLEM URL: https://www.codechef.com/problems/SIGNMOVE
# PROBLEM DIFFICULTY RATTING: 1126
# STATUS: accepted
# TIME: 0.44
# MEMORY: 9.6M

for _ in range(int(input())):
    n = int(input())

    if n%2 == 0:
        print(n//2)
    else:
        print(-(n//2 + 1))

