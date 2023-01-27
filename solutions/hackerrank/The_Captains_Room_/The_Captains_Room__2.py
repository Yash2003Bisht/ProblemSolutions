# QUESTION URL: https://www.hackerrank.com/challenges/py-the-captains-room/problem
# STATUS: Accepted

from collections import Counter
k = int(input())
rooms_list = Counter(list(map(int, input().strip().split(' '))))
for key, value in rooms_list.items():
    if value == 1:
        print(key)
