# QUESTION URL: https://www.hackerrank.com/challenges/python-time-delta/problem
# STATUS: Runtime Error

for i in range(int(input())):
    t1 = input()
    t2 = input()

import datetime

for i in range(int(input())):
    print(abs(datetime.datetime.strptime(input(), "%a %d %b %Y %H:%M:%S %z") - datetime.datetime.strptime(input(), "%a %d %b %Y %H:%M:%S %z")).total_seconds())
