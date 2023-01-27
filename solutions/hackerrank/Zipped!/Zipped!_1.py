# QUESTION URL: https://www.hackerrank.com/challenges/zipped/problem
# STATUS: Accepted

n,x = map(int,input().split(' '))
marks = []
for _ in range(x):
    marks.append(list(map(float, input().strip().split(' '))))

for mark in zip(*marks):
    print(sum(mark)/x)
