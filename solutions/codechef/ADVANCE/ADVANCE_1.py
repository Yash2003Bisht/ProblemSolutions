# DATE: 30/07/2022, 06:40:07
# PROBLEM NAME: Rating Improvement
# PROBLEM URL: https://www.codechef.com/problems/ADVANCE
# PROBLEM DIFFICULTY RATTING: 400
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.2M

for _ in range(int(input())):
    n, x = map(int, input().split(" "))
    print("yes" if x >= n and x <= n+200 else "no")

