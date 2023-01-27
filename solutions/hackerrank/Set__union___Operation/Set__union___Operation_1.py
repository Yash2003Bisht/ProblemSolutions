# QUESTION URL: https://www.hackerrank.com/challenges/py-set-union/problem
# STATUS: Accepted

n = int(input())
student_eng = set(map(int, input().split(' ')))
b = int(input())
student_fre = set(map(int, input().split(' ')))

print(len(student_eng.union(student_fre)))
