# QUESTION URL: https://www.hackerrank.com/challenges/py-set-mutations/problem
# STATUS: Accepted

(n, A) = (int(input()), set(input().split()))
n = int(input())
for _ in range(n):
    ((s, i), B) = (input().split(), set(input().split()))
    getattr(A, s)(B)
print(sum(map(int,list(A))))
