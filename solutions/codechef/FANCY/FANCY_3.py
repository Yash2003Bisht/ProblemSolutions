# DATE: 21/03/2023, 07:16:17
# PROBLEM NAME: Fancy Quotes
# PROBLEM URL: https://www.codechef.com/problems/FANCY
# PROBLEM DIFFICULTY RATTING: 1279
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.6M

for _ in range(int(input())):

    s = input().split()

    if "not" in s:
        print("Real Fancy")
    else:
        print("regularly fancy")


