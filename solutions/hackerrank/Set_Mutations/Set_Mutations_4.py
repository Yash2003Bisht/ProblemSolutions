# QUESTION URL: https://www.hackerrank.com/challenges/py-set-mutations/problem
# STATUS: Accepted

A = input().strip()
lst_A = set(map(int,input().strip().split(' ')))
N = int(input())

for _ in range(N):
    operation = input().strip().split(' ')[0]
    values = set(map(int,input().strip().split(' ')))
    if operation == 'update':
        lst_A.update(values)
    elif operation == 'intersection_update':
        lst_A.intersection_update(values)
    elif operation == 'difference_update':
        lst_A.difference_update(values)
    elif operation == 'symmetric_difference_update':
        lst_A.symmetric_difference_update(values)

print(sum(lst_A))
