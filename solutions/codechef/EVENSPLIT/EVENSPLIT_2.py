# DATE: 23/03/2023, 07:40:55
# PROBLEM NAME: Even Splits
# PROBLEM URL: https://www.codechef.com/problems/EVENSPLIT
# PROBLEM DIFFICULTY RATTING: 1282
# STATUS: accepted
# TIME: 0.12
# MEMORY: 11.6M

for _ in range(int(input())):
    n = int(input())
    s = input()
    if n == 2:
        print(s)
    else:
        s = sorted(s)
        print("".join(s))


