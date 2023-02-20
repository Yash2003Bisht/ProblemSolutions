# DATE: 08/12/2022, 08:10:46
# PROBLEM NAME: Chef and Proportion
# PROBLEM URL: https://www.codechef.com/problems/CHEFCBA
# PROBLEM DIFFICULTY RATTING: 1122
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.6M

a, b, c, d = map(int, input().split())

if a*b == c*d or a*c == b*d or a*d == c*b:
    print("Possible")
else:
    print("Impossible")

