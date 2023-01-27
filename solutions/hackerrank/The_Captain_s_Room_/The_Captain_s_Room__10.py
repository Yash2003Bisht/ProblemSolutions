# QUESTION URL: https://www.hackerrank.com/challenges/py-the-captains-room/problem
# STATUS: Wrong Answer

k = int(input())
s = set(map(int,input().strip().split(' ')))
captain_room_set = {i for i in range(1,k+2)}
print(*s.difference(captain_room_set))
