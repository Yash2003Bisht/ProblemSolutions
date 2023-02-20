# DATE: 22/08/2022, 05:28:40
# PROBLEM NAME: How much Scholarship
# PROBLEM URL: https://www.codechef.com/problems/ZCOSCH
# PROBLEM DIFFICULTY RATTING: 1012
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.6M

r = int(input())
if r <= 50:
    print(100)
elif r <= 100:
    print(50)
else:
    print(0)

