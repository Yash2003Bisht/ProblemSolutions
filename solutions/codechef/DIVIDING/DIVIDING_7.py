# DATE: 28/11/2022, 05:57:15
# PROBLEM NAME: Dividing Stamps
# PROBLEM URL: https://www.codechef.com/problems/DIVIDING
# PROBLEM DIFFICULTY RATTING: 1109
# STATUS: accepted
# TIME: 0.03
# MEMORY: 15.4M

n = int(input())
total_stamps = sum(map(int, input().split()))

if n*((n+1)/2) == total_stamps:
    print("YES")
else:
    print("NO")

