# QUESTION URL: https://www.hackerrank.com/challenges/jumping-on-the-clouds/problem
# STATUS: Wrong Answer

n = int(input())
c = input().split(' ')

jumps = 0

try:
    for _ in range(len(c)):
        if c[jumps+2] == '1':
            jumps += 1
        else:
            jumps += 1
except IndexError:
    print(jumps-1)
