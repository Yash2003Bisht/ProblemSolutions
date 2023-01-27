# QUESTION URL: https://www.hackerrank.com/challenges/py-check-strict-superset/problem
# STATUS: Accepted

a = set(input().split())
print(all(a > set(input().split()) for _ in range(int(input()))))
