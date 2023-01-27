# QUESTION URL: https://www.hackerrank.com/challenges/py-the-captains-room/problem
# STATUS: Terminated due to timeout

k = int(input())
s = list(map(int,input().strip().split(' ')))

for i in s:
    if s.count(i) == 1:
        print(i)
        break
    
