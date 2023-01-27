# QUESTION URL: https://www.hackerrank.com/challenges/jumping-on-the-clouds/problem
# STATUS: Wrong Answer

n = int(input())
c = input().split(' ')

thunderheads = c.count('1')

if thunderheads%2 == 0:
    print(len(c) - thunderheads - 1)
else:
    print(len(c) - thunderheads - 2)
