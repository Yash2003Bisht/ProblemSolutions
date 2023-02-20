# DATE: 30/08/2022, 06:26:53
# PROBLEM NAME: Buying New Tablet
# PROBLEM URL: https://www.codechef.com/problems/TABLET
# PROBLEM DIFFICULTY RATTING: 1037
# STATUS: accepted
# TIME: 0.04
# MEMORY: 9.6M

for _ in range(int(input())):
    n, b = map(int, input().split())
    maximum_area = 0
    for _ in range(n):
        tablet = list(map(int, input().split()))
        tablet_area = tablet[0]*tablet[1]
        if tablet[2] <= b and tablet_area > maximum_area:
            maximum_area = tablet_area

    print(maximum_area if maximum_area > 0 else "no tablet")


