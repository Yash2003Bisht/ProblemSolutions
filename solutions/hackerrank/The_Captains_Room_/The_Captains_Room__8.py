# QUESTION URL: https://www.hackerrank.com/challenges/py-the-captains-room/problem
# STATUS: Wrong Answer

k = int(input())
s = set(map(int,input().strip().split(' ')))
infinite_room = {i for i in range(1, max(s))}
print(*s.difference(infinite_room))
