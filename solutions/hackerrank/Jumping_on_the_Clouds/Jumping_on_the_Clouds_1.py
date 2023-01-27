# QUESTION URL: https://www.hackerrank.com/challenges/jumping-on-the-clouds/problem
# STATUS: Accepted

n = int(input())
c = input().split(' ')

jumps = 0
i = 0
while i != len(c)-1:
    if i+2 >= len(c) or c[i+2] == '1':
        i += 1
    else:
        i += 2
    jumps += 1
print(jumps)
