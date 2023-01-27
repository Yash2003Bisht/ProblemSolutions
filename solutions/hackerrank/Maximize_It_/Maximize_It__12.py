# QUESTION URL: https://www.hackerrank.com/challenges/maximize-it/problem
# STATUS: Wrong Answer

K, M = map(int, input().split(' '))
max_lst = []
for i in range(K):
    value = max(list(map(int, input().rstrip().split(' '))))
    max_lst.append(value ** 2)

print(sum(max_lst) % M)
