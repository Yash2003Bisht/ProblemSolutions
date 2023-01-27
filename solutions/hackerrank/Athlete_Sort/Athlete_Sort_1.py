# QUESTION URL: https://www.hackerrank.com/challenges/python-sort-sort/problem
# STATUS: Accepted

n,m = map(int,input().split(' '))
m_lst = []
for _ in range(n):
    m_lst.append(list(map(int,input().split(' '))))
k = int(input())

m_lst.sort(key=lambda x: x[k])

for i in m_lst:
    for j in i:
        print(j, end=' ')
    print()
