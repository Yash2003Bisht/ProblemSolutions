# DATE: 04/05/2023, 07:43:57
# PROBLEM NAME: Chef and Cube
# PROBLEM URL: https://www.codechef.com/problems/CHCUBE
# PROBLEM DIFFICULTY RATTING: 1320
# STATUS: accepted
# TIME: 0.40
# MEMORY: 9.7M

from collections import Counter

for _ in range(int(input())):
    colors = input().split()
    colors_counter = Counter(colors).most_common()
    color, count = colors_counter[0][0], colors_counter[0][1]

    if count >= 3 and ((colors[0] == color or colors[1] == color) and (colors[2] == color or colors[3] == color) and (colors[4] == color or colors[5] == color)):
        print("YES")
    else:
        print("NO")


