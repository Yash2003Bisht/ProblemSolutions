# QUESTION URL: https://www.hackerrank.com/challenges/python-time-delta/problem
# STATUS: Accepted

import datetime

for i in range(int(input())):
    print(int(abs(datetime.datetime.strptime(input(), "%a %d %b %Y %H:%M:%S %z") - datetime.datetime.strptime(input(), "%a %d %b %Y %H:%M:%S %z")).total_seconds()))
