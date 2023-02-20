# DATE: 16/01/2023, 07:07:05
# PROBLEM NAME: Cool Name
# PROBLEM URL: https://www.codechef.com/problems/CALPOWER
# PROBLEM DIFFICULTY RATTING: 1223
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.7M

for _ in range(int(input())):
    s = input()
    print(sum([(idx+1)*((ord(alpha) - 97) + 1) for idx, alpha in enumerate(sorted(s))]))


