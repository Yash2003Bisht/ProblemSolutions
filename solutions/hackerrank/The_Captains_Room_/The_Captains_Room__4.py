# QUESTION URL: https://www.hackerrank.com/challenges/py-the-captains-room/problem
# STATUS: Terminated due to timeout

k = int(input())
rooms_list = list(map(int, input().split(' ')))

for i in rooms_list:
    if rooms_list.count(i) == 1:
        print(i)
        break
