# QUESTION URL: https://www.hackerrank.com/challenges/maximizing-xor/problem
# STATUS: Accepted

l = int(input())
r = int(input())
print(max([i^j for i in range(l, r+1) for j in range(i, r+1) if i != j]))
