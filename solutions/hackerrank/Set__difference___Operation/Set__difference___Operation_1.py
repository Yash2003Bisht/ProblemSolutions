# QUESTION URL: https://www.hackerrank.com/challenges/py-set-difference-operation/problem
# STATUS: Accepted

n_eng = input()
english = set(input().split(' '))
n_french = input()
french = set(input().split(' '))

print(len(english.difference(french)))
