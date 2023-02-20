# DATE: 01/08/2022, 07:06:23
# PROBLEM NAME: N Buttons 1 Bulb
# PROBLEM URL: https://www.codechef.com/problems/ON_OFF
# PROBLEM DIFFICULTY RATTING: 977
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.1M

from collections import Counter
for _ in range(int(input())):
    n = int(input())
    s = Counter(input())
    r = Counter(input())

    if s.get('1') is not None:
        initial_btn_position = True if s.get('1') % 2 == 0 else False
    else:
        initial_btn_position = True

    if r.get('1') is not None:
        if initial_btn_position:
            current_btn_position = 1 if r.get('1') % 2 == 0 else 0
        else:
            current_btn_position = 0 if r.get('1') % 2 == 0 else 1
    else:
        current_btn_position = 1 if initial_btn_position else 0

    print(current_btn_position)


