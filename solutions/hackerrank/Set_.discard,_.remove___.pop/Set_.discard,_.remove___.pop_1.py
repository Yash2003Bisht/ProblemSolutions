# QUESTION URL: https://www.hackerrank.com/challenges/py-set-discard-remove-pop/problem
# STATUS: Accepted

n = int(input())
s = set(map(int, input().split(' ')))
N  = int(input())
for _ in range(N):
    action = input().split(' ')
    if 'pop' == action[0]:
        s.pop()
    elif 'discard' == action[0]:
        s.discard(int(action[1]))
    else:
        s.remove(int(action[1]))
print(sum(s))
