# DATE: 09/08/2022, 06:32:02
# PROBLEM NAME: Two Rooks
# PROBLEM URL: https://www.codechef.com/problems/TWOROOKS
# PROBLEM DIFFICULTY RATTING: 957
# STATUS: accepted
# TIME: 0.05
# MEMORY: 9.2M

for _ in range(int(input())):
    x1, y1, x2, y2 = map(int, input().split(" "))
    if x1 == x2 or y1 == y2:
        print("YES")
    else:
        print("NO")

