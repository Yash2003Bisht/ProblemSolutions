# QUESTION URL: https://www.codechef.com/problems/TABLET
# STATUS: accepted

for _ in range(int(input())):
    n, b = map(int, input().split())
    tablets = [list(map(int, input().split())) for _ in range(n)]
    maximum_area = 0
    for tablet in tablets:
        tablet_area = tablet[0]*tablet[1]
        if tablet[2] <= b and tablet_area > maximum_area:
            maximum_area = tablet_area

    print(maximum_area if maximum_area > 0 else "no tablet")

