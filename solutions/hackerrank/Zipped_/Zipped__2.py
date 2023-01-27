# QUESTION URL: https://www.hackerrank.com/challenges/zipped/problem
# STATUS: Accepted

n,x = map(int,input().split(' '))
marks = []
for _ in range(x):
    marks.append(list(map(float, input().strip().split(' '))))


for i in range(n):
    lst = []
    for j in range(x):
        lst.append(marks[j][i])
    print(sum(lst)/x)
