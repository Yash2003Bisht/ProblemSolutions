# QUESTION URL: https://www.codechef.com/problems/ON_OFF
# STATUS: wrong answer
# TIME: 0.02
# MEMORY: 8.9M

from collections import Counter
for _ in range(int(input())):
    n = int(input())
    s = Counter(input())
    r = Counter(input())
    if s.get('1') is not None:
        initial_btn_position = True if s.get('1') % 2 == 0 else False
    else:
        initial_btn_position = True
    current_btn_position = 1 if r.get('1') is not None and r.get('1') % 2 == 0 and initial_btn_position else 0
    print(current_btn_position)


