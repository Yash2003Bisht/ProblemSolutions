# DATE: 07/11/2023, 09:07:51
# PROBLEM NAME: Turbo Sort
# PROBLEM URL: https://www.codechef.com/problems/TSORT
# PROBLEM DIFFICULTY RATTING: 667
# STATUS: accepted
# TIME: 1.46
# MEMORY: 49.4M

num = []

for _ in range(int(input())):
    num.append(int(input()))

num.sort()

for i in num:
    print(i)


