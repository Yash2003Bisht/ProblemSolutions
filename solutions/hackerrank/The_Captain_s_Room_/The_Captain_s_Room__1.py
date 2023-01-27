# QUESTION URL: https://www.hackerrank.com/challenges/py-the-captains-room/problem
# STATUS: Accepted

k = int(input())
rooms_list = list(map(int, input().strip().split(' ')))
set_rooms_list = set(rooms_list)

print((sum(set_rooms_list)*k - sum(rooms_list)) //( k-1))
