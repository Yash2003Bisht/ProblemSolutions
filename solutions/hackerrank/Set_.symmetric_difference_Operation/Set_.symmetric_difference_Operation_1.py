# QUESTION URL: https://www.hackerrank.com/challenges/py-set-symmetric-difference-operation/problem
# STATUS: Accepted

n_eng = input()
eng = set(input().split(' '))
n_fre = input()
fre = set(input().split(' '))

print(len(eng.symmetric_difference(fre)))
