# QUESTION URL: https://www.hackerrank.com/challenges/py-the-captains-room/problem
# STATUS: Terminated due to timeout

k = int(input())
rooms_list = list(map(int, input().strip().split(' ')))
set_lst =  set(rooms_list)

for i in set_lst:
    if rooms_list.count(i) == 1:
        print(i)
        break
