# QUESTION URL: https://www.hackerrank.com/challenges/py-set-intersection-operation/problem
# STATUS: Accepted

n = input()
roll_n = set(input().split(' '))
b = input()
roll_b = set(input().split(' '))

print(len(roll_b.intersection(roll_n)))

