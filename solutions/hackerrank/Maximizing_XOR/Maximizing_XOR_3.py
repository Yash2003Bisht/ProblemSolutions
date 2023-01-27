# QUESTION URL: https://www.hackerrank.com/challenges/maximizing-xor/problem
# STATUS: Accepted

l = int(input())
r = int(input())
result = 0
for i in range(l, r+1):
    for j in range(i, r+1):
        value = i^j
        if value > result:
            result = value
print(result)
