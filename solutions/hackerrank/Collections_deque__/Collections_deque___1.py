# QUESTION URL: https://www.hackerrank.com/challenges/py-collections-deque/problem
# STATUS: Accepted

from collections import deque
d = deque()
for i in range(int(input())):
    action = input().split(' ')
    if action[0] == 'append':
        d.append(action[1])
    elif action[0] == 'pop':
        d.pop()
    elif action[0] == "popleft":
        d.popleft()
    elif action[0] == "appendleft":
        d.appendleft(action[1])
print(" ".join(d))
