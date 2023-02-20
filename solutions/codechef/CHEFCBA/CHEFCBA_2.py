# DATE: 08/12/2022, 08:07:25
# PROBLEM NAME: Chef and Proportion
# PROBLEM URL: https://www.codechef.com/problems/CHEFCBA
# PROBLEM DIFFICULTY RATTING: 1122
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.6M

lst = list(map(int, input().split()))
lst.sort()

if lst[0] / lst[1] == lst[2] / lst[3]:
    print("Possible")
else:
    print("Impossible")


