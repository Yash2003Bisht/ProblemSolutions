# DATE: 30/07/2022, 06:59:40
# PROBLEM NAME: Football Cup
# PROBLEM URL: https://www.codechef.com/problems/FOOTCUP
# PROBLEM DIFFICULTY RATTING: 412
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.2M

for _ in range(int(input())):
    n, x = map(int, input().split(" "))
    print("yes" if n == x and n >= 1 else "no")

