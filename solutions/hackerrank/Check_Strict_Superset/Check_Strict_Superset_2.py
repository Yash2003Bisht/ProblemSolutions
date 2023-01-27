# QUESTION URL: https://www.hackerrank.com/challenges/py-check-strict-superset/problem
# STATUS: Wrong Answer

A = set(map(int,input(' ').split(' ')))

print(all(A.issuperset(sub_set) for sub_set in set(map(int, input().split(' ')) for _ in range(int(input())))))
